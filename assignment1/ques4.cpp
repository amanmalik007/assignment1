#include<iostream>
#include<string.h>
using namespace std;
int main()

{
int i,j,l,flag=0;
char str[20];
cout<<"enter string\n";
cin>>str;
l=strlen(str);
for(i=1;i<=l/2;i++)
{
if(str[i]!=str[l-i-1])
{
flag++;
}
}
if(flag==0)
{
cout<<"string is palindrome ";
}
else
{
cout<<"string is not palindrome ";
}
return 0;


}
