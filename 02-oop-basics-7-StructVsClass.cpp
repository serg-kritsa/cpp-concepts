#include<iostream>
using namespace std;

struct Demo {
	int x;
	int y;

    void display(){
		cout<<x<<" "<<y<<endl;
	}
}
class Demo
{
    public:
	int x;
	int y;
	    
    void display(){
		cout<<x<<" "<<y<<endl;
	}
	
};
    
int main()
{
	Demo d;
	d.x=10;
	d.y=20;
	d.display();
	    
}
    
    
