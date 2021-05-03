#include <iostream>
using namespace std;

class Innova{
	public:
    static int price;

    Innova(){}

    static int getPrice(){return price;}
};

int Innova::price=20000;
int main(){
    cout << Innova::price << endl;
    Innova my;
    cout << my.getPrice() << endl;
}
