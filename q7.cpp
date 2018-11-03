#include<iostream>
using namespace std;

double maximum(double *p,int size)
{
    double temp=0;
    int i;
    while(i<size)
    {
        if (*p>*(p+1))
        {
            temp=*p;
        }
        p++;
        i++;
    }
    return temp;
}

int main()
{
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    double arr[size];
    double *a=arr;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter value: ";
        cin>>arr[i];
    }
    cout<<"The maximum value in the array is: "<<maximum(a,size);
    return 0;
}
