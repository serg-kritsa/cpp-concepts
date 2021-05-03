#include<iostream>
using namespace std;

void display()
{
	cout<<"Hello" <<endl;
}

float add(float x, float y)
{
    float z;
    z=x+y;
    return z;
}
int maxim(int a,int b,int c)
{
	if(a>b && a>c)
		return a;
	else if(b>c)
		return b;
	else return c;
}
int main()
{
	display();

	float x=2.3, y=7.9,z;
	z=add(x,y);
	cout << z << endl;

    int a,b,c,d;
	cout<<"Enter 3nos: ";
	cin>>a>>b>>c;
	d=maxim(a,b,c);

	cout<<"Maximum no is "<<d;

	return 0;

}

