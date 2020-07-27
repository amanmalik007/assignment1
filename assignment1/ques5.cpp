#include<iostream>
using namespace std;
int main()
{
int n,a,s=0,p;
cout<<"enter the number\n";
cin>>n;
p=n;
while(n!=0)
{
a=n%10;
s=(s*10)+a;
n=n/10;
}
if(s==p)
{
cout<<"number is palindrome ";
}
else
{
cout<<"number is not palindrome ";
}
return 0;

}
