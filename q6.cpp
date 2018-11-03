#include<iostream>
using namespace std;
int countEven(int *p,int size)
{
    int count=0;
    int i=0;
    while(i<size)
    {
        if((*p)%2==0)
        {
            count++;
        }
        p++;
        i++;
    }
    return count;
}

int main()
{
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter value: ";
        cin>>arr[i];
    }
    int *p=arr;
    cout<<countEven(p,size);
    
}

