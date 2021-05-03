#include<iostream>
using namespace std;

class Test
{
	private:
	int a;
	int* p;

    public:
	Test(int x) {
		a = x;
		p = new int[a];
	}
	Test(Test &t) {
		a = t.a;
		p = new int[a]; // should be new memory in heap // !!! NOT	p = t.p;
	}
};

int main()
{
	Test t1(5);
	Test t2(t1);

	return 0;

}

