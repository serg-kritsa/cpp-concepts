#include<iostream>
#include<memory>
using namespace std;

// unique_ptr - one pointer to obj
// shared_ptr - many ptr to obj
// weak_ptr

class Rectangle{
	int length;
    int breadth;
    public:
	Rectangle(int l,int b)	{
		length=l;
	    breadth=b;
	}	    
    int area()	{
		return length*breadth;
	}	
};

void fun(){

}
    
int main(){
	unique_ptr<Rectangle> up(new Rectangle(10,5)); // allocate memory in heap and control it
	up->area();
	// unique_ptr<Rectangle> up2=up; // not allowed more than one
	// unique_ptr<Rectangle> up3(up); // not allowed more than one
	unique_ptr<Rectangle> up2;
	up2=move(up);
	cout << up2->area() << endl;
	// cout << up->area() << endl; // now invalid

	shared_ptr<Rectangle> ptr(new Rectangle(10,5));
	cout<<ptr->area()<<endl;
	shared_ptr<Rectangle> ptr2;
	ptr2=ptr;
	    
	cout<<"ptr2 "<<ptr2->area()<<endl;
	cout<<"ptr "<<ptr->area()<<endl;
	cout<<ptr.use_count()<<endl; // 2
	
}
    
