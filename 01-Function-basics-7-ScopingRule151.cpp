#include<iostream>
using namespace std;

int x=10;
int main()
{
	int x=20;
	{
		int x=30;
		cout<<x<<endl; // 30
	}

	cout<<x<<endl; // 20 
	cout<<::x<<endl; // 10 - :: means from global scope

}

