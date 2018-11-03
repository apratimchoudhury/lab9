#include<iostream>
using namespace std;

int main()
{
    int a,b;
    a=2;b=3;
    int *p;
    p=&a;
    cout<<a<<" "<<b<<" "<<" "<<*p<<endl;
    p=&b;
    cout<<a<<" "<<b<<" "<<" "<<*p<<endl;
    return 0;
}
