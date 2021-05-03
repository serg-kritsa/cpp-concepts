#include<iostream>
using namespace std;

void display(const int &a, int &b) {
    // x++;
    cout << a << " " << b << endl;
    // a++; // not allowed // prop read-only
}
int main(){
    int x = 10;
    int y = 20;
    display(x,y);
    cout << "Main " << x << " " << y << endl;
}
    
