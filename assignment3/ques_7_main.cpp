#include<iostream>
#include"Invoice.h"
using namespace std;
int main()
{
    Invoice v("GAS3C","Digital wall clock",2,75.5);
  cout<<"Item number:"<<"  "<<v.getpart_num()<<endl;
  cout<<"Item description :"<<"  "<<v.getpart_descr()<<endl;
  cout<<"Quantity :"<<"     "<<v.getquantity()<<endl;
  cout<<"Price per item :"<<"  "<<v.getprice()<<endl;
  cout<<"total amount :"<<"  "<<v.Invoiceamount()<<endl;
}

