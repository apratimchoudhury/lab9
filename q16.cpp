#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char string[8]="Apratim";
    char *p=string;
    int n=strlen(string);
    for(int i=0;i<n;i++)
    {
        for(int j=n-i-1;j<n;j++)
        {
            if(*(p+j)!=0)
            {
                cout<<*(p+j);
            }
        }
        cout<<endl;
    }
    return 0;

}
