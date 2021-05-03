#include<iostream>
using namespace std;

int g=5;
void fun()
{
	int a=10;
	a++;
    g++;

	cout<<a<<" "<<g<<endl; // 11 6
}

int main()
{
    cout<<g<<endl; // 5
	fun();

	cout<<g<<endl; // 6

}
