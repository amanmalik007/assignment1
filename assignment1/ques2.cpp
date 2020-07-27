#include<iostream>
using namespace std;
int main()
{
int i=0,j=0,a[20],n,temp;
cout<<"enter the limit of array\n";
cin>>n;
cout<<"enter elements of array\n";
for(i=0;i<n;i++)
{cin>>a[i];
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
cout<<a[n-2]<<" is 2nd maximum number "<<endl;
cout<<a[1]<<" is the second smallest number "<<endl;
return 0;
}
