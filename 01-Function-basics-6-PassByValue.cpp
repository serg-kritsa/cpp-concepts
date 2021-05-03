#include<iostream>
using namespace std;
    
void swap(int a,int b)
{
	cout<<a<<" "<<b<<endl; // 10 20
	int temp;
	temp=a;
	a=b;
	b=temp;
	    
	cout<<a<<" "<<b<<endl; // 20 10 - swapped only inside the function 
}
    
int main()
{    
	int x=10,y=20;
	swap(x,y);
	    
	cout<<x<<" "<<y<<endl; // 10 20
	
	return 0;
	    
}
    
