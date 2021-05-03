#include<iostream>
using namespace std;

class Parent{
	virtual void show() final{     	 // deny overriding	 // only virtual can be final
	}	
};
    
class Child:Parent{
	void show(){	        
	}	
};
    
    
