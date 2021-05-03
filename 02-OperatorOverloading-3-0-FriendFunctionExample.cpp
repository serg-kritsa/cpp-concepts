#include<iostream>
using namespace std;
    
class Your;
class Test
{
    private:
	int a;
    protected:
	int b;
    public:
	int c;
	friend void fun();
};
void fun(){
	Test t;
	t.a=10; // access beacause of friend function
	t.b=15; // access beacause of friend function
	t.c=9; // access beacause of friend function
}
int main(){
    	
}
    
    
    


