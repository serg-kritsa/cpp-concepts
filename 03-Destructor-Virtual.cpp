#include<iostream>
using namespace std;

class Base{
    public:
	virtual ~Base()	{cout<<"Destructor of Base"<<endl;}
};

class Derived:public Base{
    public:
	~Derived(){cout<<"Destructor of Derived"<<endl;}
};

void fun1(){
	Derived d; // Destructor of Derived // Destructor of Base
}
void fun2(){
	// usual destructor THEN // Destructor of Base
	// virtual destructor THEN // Destructor of Derived // Destructor of Base
	Base *p=new Derived();
	delete p;
}
int main(){
	fun1();
	// ===============================================
	fun2();
}

