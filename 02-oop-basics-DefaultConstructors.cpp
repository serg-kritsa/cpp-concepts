#include<iostream>
using namespace std;

class Rectangle
{
    private:
	int length;
	int breadth;

    public:
	Rectangle() {
		length=1;
		breadth=1;
	}
//    comment default is commented, so
//    default values could be set like this
	Rectangle(int l, int b) {
		length=l;
		breadth=b;
	}
	int area(){
        return length * breadth;
	}
};

int main()
{
	Rectangle r1;
	cout<<r1.area()<<endl;

	Rectangle r2(10,5);
	cout<<r2.area()<<endl;

	return 0;

}

