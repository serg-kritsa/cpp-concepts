#include<iostream>
using namespace std;

class Test{
    public:
    int a;
    static int count; // 1) declaration
    Test(){
	    a=10;
        count++;
    }
};
 int Test::count=0; // 2) initialization

int main(){
	Test t1,t2;
	cout<<t1.count<<endl;
	cout<<t2.count<<endl;
	t1.count=25; // can be changed
	cout<<t2.count<<endl;
	cout<<Test::count<<endl; // getter
}
