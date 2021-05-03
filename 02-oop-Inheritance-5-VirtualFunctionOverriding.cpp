#include<iostream>
using namespace std;

class Base{
    public:
	// 1) virtual method
	virtual void fun(){cout<<"fun of Base"<<endl;}
};    
class Derived:public Base{
    public:
	// 2) overriden method
	void fun(){cout<<"fun of Derived"<<endl;}
};    
int main(){
	Derived d;
	d.fun();
	// 3) Base pointer to derived class
	// 1) 2) 3) -> runtime polimorphism
	Base *ptr=&d;
	ptr->fun();	    
}

//// runtime polimorphism example
// #include<iostream>
// using namespace std;    
// class BasicCar{
//     public:
// 	virtual void start(){cout<<"BasicCar Started"<<endl;}
// };    
// class AdvanceCar:public BasicCar{
//     public:
// 	void start(){cout<<"AdvanceCar Started"<<endl;}
	
// };    
// int main(){
// 	BasicCar *ptr=new AdvanceCar();
// 	ptr->start();	    
// }
