//linear search algorithm for integer array
#include <iostream>
using namespace std;
int main(void)
{
    int n; //size of array
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n]; //interger array
    cout<<"Enter the elements of array"<<endl;
    for(int i = 0; i < n; i++)
    cin>>a[i];
    int k; //number to be searched
    cout<<"Enter the number to be searched: ";
    cin>>k;

    for(int i = 0; i < n; i++)
    {
        if(a[i] == k)
        {
            cout<<"Number "<<k<<" found at index "<<i<<endl;
            return 0;
        }
    }
    cout<<"Number "<<k<<" not found"<<endl;
    return 0;
}
