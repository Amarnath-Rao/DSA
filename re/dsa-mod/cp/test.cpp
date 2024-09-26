#include<bits/stdc++.h>
using namespace std;
class c1{
    public:
     virtual void print(){
        cout<<"Hello"<<endl;
     }
};
class subclass: public c1{
    public:
     void print() override{
        cout<<"Printing Subclass"<<endl;
     }
};
int main(){
    c1* classc1;
    subclass subclassc1;
    classc1=&subclassc1;
    classc1->print();
}