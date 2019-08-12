//binary search algorithm for sorted integer array
#include <iostream>
using namespace std;
int main(void)
{
    int n; //size of array
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n]; //interger array
    cout<<"Enter the elements of sorted array"<<endl;
    for(int i = 0; i < n; i++)
    cin>>a[i];
    int k; //number to be searched
    cout<<"Enter the number to be searched: ";
    cin>>k;
    int beg = 0; //starting index of array
    int end = n - 1; //ending index of array
   
    while(beg <= end)
    {
        int mid = (beg + end) / 2;
        if(a[mid] < k)
        beg = mid + 1;
        else if(a[mid] > k)
        end = mid - 1;
        else
        {
            cout<<"Number "<<k<<" found at index "<<mid<<endl;
            return 0;
        }   
    }
    cout<<"Number "<<k<<" not found"<<endl;
    return 0;
}
