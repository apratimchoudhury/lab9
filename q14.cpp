#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char string[50];
    cout<<"Enter a string: ";
    cin>>string;
    for(int i=0;i<strlen(string);i++)
    {
        cout<<string[i];
    }
    cout<<endl;
    char *p=string;
    while(*p!='\0')
    {
        cout<<*p;
        p++;
    }
    return 0;
}
