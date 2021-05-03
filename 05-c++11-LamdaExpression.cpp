#include<iostream>
using namespace std;

int main()
{
	// [capture_list](param_list) -> return type{body};
	[](){cout<<"Hello"<<endl;}();

	[](int x,int y){cout<<"Sum is "<<x+y<<endl;}(10,30);

	int x = [](int x,int y){return x+y;}(10,30);
	
	int y = [](int x,int y)->int{return x+y;}(10,30);

	int a = 1, b = 2;
	[a,b](){cout << a << " " << b;}();
	[&a,&b](){cout << ++a << " " << ++b;}(); // captured vars can be modified
	[&](){cout << ++a << " " << ++b;}(); // to make accessible all the scope 

}
    
