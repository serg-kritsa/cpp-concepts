#include<iostream>
using namespace std;
    
class Base{
    public:
	void fun1()	{
	    cout<<"fun1 of Base"<<endl;
	}
};
    
class Derived:public Base{
    public:
	void fun2()	{
		cout<<"fun2 of Derived"<<endl;
	}
};
    
int main(){
	Derived d;
	d.fun1();
	d.fun2();
	Base *ptr=&d;
	ptr->fun1();
	// ptr->fun2(); // not allowed because of Base Type Pointer
	return 0;
}
