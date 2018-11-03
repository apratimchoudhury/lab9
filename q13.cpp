#include<iostream>
using namespace std;

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    int *p=arr;
    cout<<endl;
    for(int j=0;j<10;j++)
    {
        cout<<*p<<" ";
        p++;
    }
    return 0;
}
