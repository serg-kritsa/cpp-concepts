#include<iostream>
using namespace std;

// all pure virt func means interface
class Base{
    public:
    virtual void fun1()=0; // pure virtual function // must be overriden
    virtual void fun2()=0; // pure virtual function // must be overriden
};
    
class Derived :public Base{
    public:
    void fun1(){
        cout<<"fun1 of Derived"<<endl;
    }                  
    void fun2(){
        cout<<"fun2 of Derived"<<endl;
    }
};
    
int main(){
    Derived d;
    d.fun1();
    d.fun2();
} 
    
