#include <iostream>
using namespace std;

int main()
{
    char a=128;
    cout<<(int)a<<endl; // -128
        
    char b=127;
    b++;
    cout<<(int)b<<endl; // -128
        
    char c=130;
    c++;
    cout<<(int)c<<endl; // -125
        
    char d=-128;
    d--;
    cout<<(int)d<<endl; // 127

    int e=INT_MAX; // maximum integer value.
    e++;
    cout<<(int)e<<endl; // -2147483678

    int f=32767; // maximum integer value.
    f++;
    cout<<(int)f<<endl;
        
    return 0;
    
}
    
