#include<iostream>
using namespace std;
       
class DemoInStack{
    public:
	DemoInStack()	{cout<<"Constructor of DemoInStack"<<endl;}	        
    ~DemoInStack()	{cout<<"Destructor of DemoInStack"<<endl;}	
};

class DemoInHeap{
	int *p;
    public:
	DemoInHeap(){
		p=new int[10];
	    cout<<"Constructor of DemoInHeap"<<endl;
	}	        
    ~DemoInHeap(){
		delete[]p;
	   	cout<<"Destructor of DemoInHeap"<<endl;
	}
	
};
    
void fun1(){DemoInStack ds;}
    
void fun2(){
	DemoInHeap *p=new DemoInHeap();
	delete p;
}
    
int main(){
	fun1();
	// =============================================
	fun2();
}
    
    
