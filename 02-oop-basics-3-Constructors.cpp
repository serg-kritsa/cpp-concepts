#include<iostream>
using namespace std;

class Rectangle
{
    private:
	int length;
	int breadth;

    public:
//	Rectangle() {
//		length=1;
//		breadth=1;
//	}
//    comment default is commented, so
//    default values could be set like this
	Rectangle(int l = 1, int b = 1) {
		setLength(l);
		setBreadth(b);
	}
	Rectangle(Rectangle &r) {
        length = r.length;
        breadth = r.breadth;
	}
	void setLength(int l) { length=l; }
	void setBreadth(int b) { breadth=b; }
 	int getLength() { return length; }
	int getBreadth() { return breadth; }
	int area() { return length*breadth; }
};

int main()
{
	Rectangle r1;
	cout<<r1.area()<<endl;

	Rectangle r2(10,5);
	cout<<r2.area()<<endl;


	Rectangle r3(r1);
	cout<<r3.area()<<endl;

	return 0;

}

