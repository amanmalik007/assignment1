#include<iostream>
using namespace std;
int main()
{
int a[20],n,i,j,temp;
cout<<"enter limit of array\n";
cin>>n;
cout<<"enter array element\n";
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=1;i<n;i++)
{
temp=a[i];
j=i-1;
while(j>=0&&temp<=a[j])
{
a[j+1]=a[j];
j=j-1;
}
a[j+1]=temp;
}
cout<<"sorted array is \n";
for(i=0;i<n;i++)
{
cout<<a[i]<<"\t";
}
return 0;

}
