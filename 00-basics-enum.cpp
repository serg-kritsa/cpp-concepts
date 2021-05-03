#include <iostream>
using namespace std;

#define x 0
const int y=0
enum day {mon,tue,wed,thu,fri,sat,sun};
enum seasons {winter=1,spring=3,summer,fall=15};

int main()
{
    day d;
    d=tue;
    cout<<mon<<endl; // 0
    cout<<fri<<endl; // 4

    cout<< winter <<endl; // 1
    cout<< spring <<endl; // 3
    cout<< summer <<endl; // 4
    cout<< fall <<endl; // 15

    return 0;

}
