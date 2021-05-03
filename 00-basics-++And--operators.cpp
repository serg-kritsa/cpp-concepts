#include <iostream>
using namespace std;

int main()
{
    int f=5;
    f++; // 6
    cout<<f<<endl;

    int g=5;
    ++g; // 6
    cout<<g<<endl;
    
    int i=5,j;
    j=i++; // 5
    cout<<j<<" "<<i<<endl;
        
    int k=5,l;
    l=++k; // 6
    cout<<l<<" "<<k<<endl;
        
    int a=5,b;
    b=2*++a + 2*a++; // 24
    cout<<b<<" "<<a<<endl;;
        
    int c=5,d;
    d=2*c++ + 2*c++; // 22
    cout<<d<<" "<<c<<endl;
        
    return 0;
    
}
    
