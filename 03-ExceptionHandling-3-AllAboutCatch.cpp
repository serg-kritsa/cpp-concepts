#include<iostream>
using namespace std;

class MyException1: exception{       };

class MyException2:public MyException1{     };

int main(){
	try{
	    throw 1.5;
//	    throw 1;
//		throw MyException1();
	}
	catch(int e){
		cout<<"Int Catch"<<endl;
    }
	catch(double e){
	    cout<<"Double Catch"<<endl;
	}
	catch(MyException2 e){
		// extended above parent
		cout<<"MyException2 Catch"<<endl;
    }
	catch(MyException1 e){
	    cout<<"MyException1 Catch"<<endl;
	}
	catch(...){
		cout<<"All Catch"<<endl;
	}
}

