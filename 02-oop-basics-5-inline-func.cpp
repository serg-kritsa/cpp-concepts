#include<iostream>
using namespace std;

class Test
{
    public:
    void func1(){ cout << "inline" << endl; };
    inline void func2(); // will not be generated separately (outside class)
};
void Test::func2(){ cout << "non-inline" << endl; }
int main()
{
	return 0;
}