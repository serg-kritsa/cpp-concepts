#include <iostream>
using namespace std;

int max(int a, int b)
{
    return a > b ? a : b;
}
int min(int a, int b)
{
    return a < b ? a : b;
}
void display()
{
	cout<<"Hello" <<endl;
}
int main()
{
    void (*fp)(); // declaration
    fp=display; // initialization
    (*fp)(); // call

    int (*fmath)(int, int);
    fmath=max;
    (*fmath)(10,5);
    
    fmath=min; // changed function pointer
    (*fmath)(10,5);

    return 0;
}

