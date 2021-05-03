#include<iostream>
#include<fstream>
using namespace std;
     
int main()
{
	// ofstream ofs("My.Text", ios::app); 
	ofstream ofs("My.Text"); // ios::trunc // by default // 
	ofs<<"john"<<endl;
	ofs<<25<<endl;
	ofs<<"cs"<<endl;
	ofs.close();	    
}
    
