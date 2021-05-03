#include <iostream>
using namespace std;

int main()
{
    int a=11,b=7,c; // 1011 & 0101
    c=a&b;
    cout<<c<<endl; // 1
        
    int d=11,e=7,f; // 1011 & 0111
    f=d|e;
    cout<<f<<endl; // 15         1111
        
    int g=11,h=7,i;
    i=g^h; // XOR
    cout<<i<<endl; // 12        1100
        
    char j=5,k; // 0101
    k=j<<1; // left shift
    cout<<(int)k<<endl; // 10       1010
        
    char l=20,m; // 0001 0100
    m=l>>1; // right shift
    cout<<(int)m<<endl; // 10       1010
        
    char x=5,y; // 0101
    y= ~ x;
    cout<<(int)y<<endl; // -6
        
    return 0;
        
}
