#include<iostream>
using namespace std;

// at least one pure virtual function means abstract class
class Base{
    public:
    void fun1(){
        cout<<"fun1 of Base"<<endl;
    }  
    virtual void fun2()=0; // pure virtual function // must be overriden
};
    
class Derived :public Base{
    public:                
    void fun2(){
        cout<<"fun2 of Derived"<<endl;
    }
};
    
int main(){
    Derived d;
    d.fun1();
    d.fun2();

} 