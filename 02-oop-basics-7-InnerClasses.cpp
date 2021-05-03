#include<iostream>
using namespace std;

class Outer
{
	class InnerPrivate{
		public:
		void display(){
			cout << "Display of Inner Private" << endl;
//			cout << a << endl; // non-static is not accessable
			cout << "public static from InnerPrivate - " << b << endl;
		}
	};

    public:
	int a = 1;
	static int b;
	void fun(){
		i1.display();
		i2.display();
	}
	class InnerPublic{
		public:
		void display(){
			cout << "Display of Inner Public" << endl;
//			cout << a << endl; // non-static is not accessable
			cout << "public static from InnerPublic - " << b << endl;
		}
	};

    InnerPrivate i1;
    InnerPublic i2;
};
int Outer::b = 2;

int main(){
    Outer o;
    o.fun();
	// Outer::InnerPrivate i; // not allowed
	Outer::InnerPublic i;
}


