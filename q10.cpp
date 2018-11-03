#include<iostream>
using namespace std;
void reverse(char *p)
{
    
    int count;
    count=0;
    char *q=p;
    while(*q!='\0')
    {
        q++;
        count++;
    }
    char *start=p;
    char *end=p+count-1;    
    while(start<end)
    {
        char temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
    cout<<p;
}

int main()
{
    char p[50];
    cout<<"Enter a string: ";
    cin>>p;
    reverse(p);
    return 0;
}
