#include<iostream>
using namespace std;

int divisionWithThrowInt(int a,int b) throw(int){
	if(b==0) throw 1;
	return a/b;
}
int divisionWithThrowString(int a,int b) throw(string){
	if(b==0) throw "exception";
	return a/b;
}
class MyException: exception{ };
int divisionWithThrowMyException(int a,int b) throw(MyException){
	if(b==0) throw MyException();
	return a/b;
}

int division(int a,int b){
	if(b==0) throw 1;
	return a/b;
}

int main(){
	int x=10,y=0,z;
	try{
		z=divisionWithThrowInt(x,y);
//		z=divisionWithThrowString(x,y);
//		z=divisionWithThrowMyException(x,y);
//		z=division(x,y);
		cout<<z<<endl;
	}

	catch(int e)	{
		cout<<"Division by Zero"<<e<<endl;
	}
	cout<<"Bye"<<endl;
}

