#include<iostream>
using namespace std;
bool strcomp(char str1[],char str2[])
{
    int count1,count2;
    char *p=str1;
    char *q=str2;
    while(*p!='\0')
    {
        count1++;
        p++;
    }
    while(*q!='\0')
    {
        count2++;
        q++;
    }
    if(count1==count2)
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
    char str1[50];char str2[50];
    cout<<"Enter a string: ";
    cin>>str1;
    cout<<"Enter another string: ";
    cin>>str2;
    bool check=strcomp(str1,str2);
    if(check==1)
    {
        cout<<"The strings are of equal length!!"<<endl;
    }
    else
        cout<<"The strings are not of equal length!"<<endl;
    return 0;
}
