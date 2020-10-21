/*
 Inheritance allows the developers to create a subclass that can reuse code that is declared in a
 superclass.being able to avoid the duplication of a common function of several classes by building
 off of a class inheritance can save time.Also by placing a common function in a single superclass
 can help prevent duplicate errors in code.
 */
#include<iostream>
using namespace std;

// Base class
class Animal{
public:
    void eat()
    {
        cout<<"I can eat."<<endl;
    }
    void sleep()
    {
        cout<<"I can sleep."<<endl;
    }

 };

 //Derived class
 class Dog:public Animal{
 public:
     void bark()
     {
         cout<<"I can Bark."<<endl;
     }
 };
 //reusing Animal class
 class Tiger:public Animal{
 public:
    void roar()
    {
        cout<<"I can Roar."<<endl;
    }
 };
 int main()
 {
     Dog d;
     cout<<"Dog"<<endl;
     d.eat();       //calling base class function
     d.sleep();
     d.bark();      //calling Derived class function
     cout<<endl;
     Tiger t;
     cout<<"Tiger"<<endl;
     t.eat();
     t.sleep();
     t.roar();

     return 0;
 }
