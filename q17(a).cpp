#include<iostream>
using namespace std;
void strcopy(char string[],char stringcpy[])
{
    char *p=string;
    char *s=stringcpy;
    while(*p!='\0')
    {
        *s=*p;
        p++;
        s++;
    }
    *s='\0';
}

int main()
{
    char string[100];
    char stringcpy[100];
    cout<<"Enter a string: ";
    cin>>string;
    strcopy(string,stringcpy);
    cout<<stringcpy;
    return 0;
}
