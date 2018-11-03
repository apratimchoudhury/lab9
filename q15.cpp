#include<iostream>
using namespace std;
int main()
{
    char string[]="ApratimChoudhury";
    int i,j;
    i=0;j=0;
    char *p=string;
    char *q=string;
    while(*p!='\0')
    {
        while(*q!='\0')
        {
            cout<<*q;
            q++;
        }
        cout<<endl;
        q=p++;
        
    }
    return 0;
}
