#include<iostream>
using namespace std;
int main()
{
int n,i,flag=0;
cout<<"enter number\n";
cin>>n;
for(i=2;i<=n-1;i++)
{
if(n%i==0)
{
flag=1;
break;
}
}
if(flag==0)
{
cout<<"number is prime ";
}
else
{
cout<<"number is not prime ";
}
return 0;

}
