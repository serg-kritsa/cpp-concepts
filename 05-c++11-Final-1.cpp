#include<iostream>
using namespace std;

class Parent final{    	 // deny inheritance
	virtual void show(){ 
	}	
};
    
class Child:Parent{
	void show(){	        
	}	
};
    
    
