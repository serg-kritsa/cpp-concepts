#include<iostream>
using namespace std;

class Demo {
    public:
    int x = 10;
    int y = 20;

    void display() const {
        // x++; // not allowed // props read-only
        cout << x << " " << y << endl;
    }
};
int main(){
    Demo d;
    d.display();
}
    
