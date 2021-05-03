#include<iostream>
using namespace std;

class Rectangle
{
    private:
	int length;
	int breadth;

    public:
    Rectangle();
    Rectangle(int l, int b);
	Rectangle(Rectangle &r);
	void setLength(int l);
	void setBreadth(int b);
 	int getLength();
	int getBreadth();
	int area();
	bool isSquare();
	~Rectangle();
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
Rectangle::Rectangle() {
	length = 1;
	breadth = 1;
}
Rectangle::Rectangle(int l = 1, int b = 1) {
	setLength(l);
	setBreadth(b);
}
Rectangle::Rectangle(Rectangle &r) {
	length = r.length;
	breadth = r.breadth;
}
void Rectangle::setLength(int l) { length=l; }
void Rectangle::setBreadth(int b) { breadth=b; }
int Rectangle::getLength() { return length; }
int Rectangle::getBreadth() { return breadth; }
int Rectangle::area() { return length*breadth; }
bool Rectangle::isSquare() { return length == breadth; }
Rectangle::~Rectangle() { cout << "Destructor" << endl; }

