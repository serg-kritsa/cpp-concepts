#include<iostream>
using namespace std;

#define PI 3.1425
#ifndef PI
    #define PI 3
#endif

#define max(x,y) (x>y?x:y)
#define msg(x) #x

int main(){
	cout<<PI<<endl; // 3.1425
	cout<<max(10,12)<<endl; // 12
	cout<<msg(hello)<<endl; // hello	    
}
    
