#include<iostream>
#include<fstream>
using namespace std;
     
int main()
{
	ifstream ifs;
	ifs.open("My.txt");
	if (!ifs.is_open())	{ // if (!ifs) // the same	
		cout << "file cannot be open" << endl;
	}	
	cout<<"file is opened"<<endl;
	string name;
	int roll;
	string branch;
	ifs>>name>>roll>>branch;
	    
	cout<<"name"<<name<<endl;
	cout<<"roll"<<roll<<endl;
	cout<<"branch"<<branch<<endl;
	
	if (!ifs.eof())	{ 
		cout << "end of file reached" << endl;
		ifs.close();
	}	    
}
