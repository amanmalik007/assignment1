#include<iostream>
#include"Invoice.h"
using namespace std;
Invoice::Invoice(string name,string d,int quantity=0,int price=0){
Invoice::setpart_num(name);
Invoice::setpart_descr(d);
Invoice::setprice(price);
Invoice::setquantity(quantity);
}
void Invoice::setpart_num(string name){
this->name=name;
}
string Invoice::getpart_num(){
return name;
}
void Invoice::setpart_descr(string d){
this->d=d;
}
string Invoice::getpart_descr(){
return d;
}
void Invoice::setquantity(int quantity){
this->quantity=quantity;
}
int Invoice::getquantity(){
return quantity;
}
void Invoice::setprice(int price){
this->price=price;
}
int Invoice::getprice(){
return price;
}
int Invoice::Invoiceamount()
{
    amount=price*quantity;
    return amount;
}
