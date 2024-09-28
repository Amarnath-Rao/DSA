#include<bits/stdc++.h>
using namespace std;
/*
*OOP enhances modularity, maintainability, and scalability in software development.*
OOP is used to design software in a modular way, making it easier to manage, scale, and maintain. It promotes code reuse, improves data security through encapsulation, and allows flexible behavior with polymorphism, making development more efficient and organized.
---------------------------------------------------------------
Encapsulation: Used to hide sensitive data from users.
Abstraction: Simplifies complex internal processes.
Inheritance: Allows a class to reuse the functionality of another class.
Polymorphism: Allows functions or methods to operate in different ways based on input (function overloading) or the object it is acting upon (function overriding).
*/
//////////////////////////////////////////////////////////////////////////////////////////
/*
1. Encapsulation:
Encapsulation refers to bundling data and methods that operate on the data into a single unit or class and restricting access to some of the object’s components.
2. Abstraction:
Abstraction involves hiding the complex details and showing only the essential features of the object.
3. Inheritance:
Inheritance allows a class to inherit properties and methods from another class.
4. Polymorphism:
a) Function Overloading: (Compile-Time Polymorphism)
In function overloading, multiple functions have the same name but different parameters.
b) Function Overriding: (Run-Time Polymorphism)
Function overriding occurs when a derived class provides a specific implementation of a function that is already defined in its base class.
*/

//*Encapsulation*
class class1{
    private:
        int id;
        string name;
    public:
        void setDetails(int id,string name){
            this->id=id;
            this->name=name;
        }
        void getDetails(){
            cout<<"ID: "<<id<<endl;
            cout<<"Name: "<<name<<endl;
        }
};
//*Abstractions*
class c2{
    //only essential details are exposed
    public:
        void startCar(){
            startEngine();
            cout<<"Car has started."<<endl;
        }
    private:
        void startEngine(){
            cout<<"Engine has started."<<endl;
        }
};
//*Inheritance*
class class3{
    public:
        void eat(){
            cout<<"Animal has eating."<<endl;
        }
};
class childc3: public class3{
    public:
        void bark(){
            cout<<"Dog is barking."<<endl;
        }
};
//*Compile-time polymorphism*
class c4{
    public:
        int add(int a,int b){return a+b;}
        int add(int a,int b,int c) {return a+b+c;}
};
//*Run-Time Polymorphism*
//*Function overriding occurs when a derived class provides a specific implementation of a function that is already defined in its base class.*/
class parentc5{
    public:
        virtual void display(){
            cout<<"display parent"<<endl;
        }
};
class childc5: public parentc5{
    public:
        void display() override{
            cout<<"child display over runtime"<<endl;
        }
};
int main(){
    class1 c1;
    c1.setDetails(1,"John");
    c1.getDetails();
    c2 c2;
    c2.startCar(); //only exposes startCar, not StartEngine
    childc3 c3; //Inheritence
    c3.eat();
    c3.bark();
    c4 c4;
    cout<<c4.add(5,10)<<endl;
    cout<<c4.add(5,10,15)<<endl;

    parentc5 *c5;
    childc5 cc5;
    c5=&cc5;
    c5->display();
}

/*
Why is a virtual function needed for runtime polymorphism?
Without a virtual function, the function call would be resolved at compile time, and the base class function would be called even when pointing to a derived class object.
*/