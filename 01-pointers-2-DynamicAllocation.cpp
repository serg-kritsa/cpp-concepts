#include<iostream>
using namespace std;

int main()
{
    int *p0=new int[5];
	p0[0]=12;
	p0[1]=13;
	// cout<<p0[1]<<endl;

	delete []p0;
	p0=nullptr; // built-in literal for NULL;

    int size;
	cout<<"Enter Size of Elements in Stack";
	cin>>size;
	int A[size]; //in stack //
	// one-time initialized
	cout<<sizeof A<<endl;


	cout<<"Enter Size of Elements in Heap";
	cin>>size;
	int *p=new int[size];
	
	
	delete []p; // prevent memory leak
    cout<<"Reenter Size of Elements in Heap";
	cin>>size;
    p=new int[size];
    
    
    
	delete []p; // prevent memory leak
	p=nullptr; // built-in literal for NULL;

    return 0;

}
