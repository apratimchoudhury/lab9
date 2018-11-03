#include<iostream>
#include<cstring>
using namespace std;
char *reverseString(char *string)
{
    char *start=string;
    char *end=start+strlen(string)-1;
    while(end>start)
    {
        char temp=*start;
        *start=*end;
        *end=temp;
        start++;end--;
    }
    return string;
}
int main()
{
    char string[50];
    cout<<"Enter a string: ";
    cin>>string;
    cout<<"The reverse of the string is: "<<reverseString(string)<<endl;
    return 0;
}
