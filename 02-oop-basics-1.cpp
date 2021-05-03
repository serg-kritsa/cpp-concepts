#include<iostream>
using namespace std;

class Rectangle
{
    public:
	int length;
	int breadth;

	int area() { return length*breadth; }

	int perimeter() { return 2*(length+breadth); }
};

int main()
{
	// in stack
	Rectangle r1;
	r1.length=10;
	r1.breadth=5;

    cout<<"Area is "<<r1.area()<<endl;
    cout<<"Perimeter is "<<r1.perimeter()<<endl;
    cout<<"============================="<<endl;

	// access via pointer
	Rectangle r2;
    Rectangle *ptr;
	ptr=&r2;
	ptr->length=10;
	ptr->breadth=5;

	cout<<"Area is "<<ptr->area()<<endl;
	cout<<"Perimeter is "<<ptr->perimeter()<<endl;
    cout<<"============================="<<endl;

	// in heap
	Rectangle *ptr2heap = new Rectangle();
	ptr2heap->length=10;
	ptr2heap->breadth=5;

	cout<<"Area is "<<ptr2heap->area()<<endl;
	cout<<"Perimeter is "<<ptr2heap->perimeter()<<endl;
    cout<<"============================="<<endl;

    return 0;
}

