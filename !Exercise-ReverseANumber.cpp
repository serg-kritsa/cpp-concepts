#include<iostream>
using namespace std;
    
int main()
{
	// 1st way
	// int n,r;
	// cout<<"enter the number";
	// cin>>n;
	// while(n>0)
	// {
	// 	r=n%10;
	// 	cout<<r<<endl;
	// 	// cout<<r; // in one line
    //     n=n/10;
	// }

	// 2nd way
	int n,r,rev=0;
	cout<<"Enter the Number";
	cin>>n;
	    
	while(n>0)
	{
		r=n%10;
	    n=n/10;
		rev=rev*10+r;
	}
	cout<<"Reverse Number is"<<rev;
	    
	return 0;
}
