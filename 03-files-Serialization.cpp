#include<iostream>
#include<fstream>
using namespace std;

class Student{
    private:
    string name;
    int roll;
    string branch;

	public:
    Student(){}

    Student(string n,int r,string b)    {
        name=n;
        roll=r;
        branch=b;
    }

    friend ofstream & operator<<(ofstream &ofs,Student s);
    friend ifstream & operator>>(ifstream &ifs,Student &s);
    friend ostream & operator<<(ostream &os,Student &s);

};

ofstream & operator<<(ofstream &ofs,Student s){
    ofs<<s.name<<endl;
    ofs<<s.roll<<endl;
    ofs<<s.branch<<endl;
    return ofs;
}

ifstream & operator>>(ifstream &ifs,Student &s){
    ifs>>s.name;
    ifs>>s.roll;
    ifs>>s.branch;
    return ifs;
}

ostream & operator<<(ostream &os,Student &s){
    os<<"Name "<<s.name<<endl;
    os<<"Roll "<<s.roll<<endl;
    os<<"Branch "<<s.branch<<endl;
    return os;
}

int main(){
    ofstream ofs("Test.txt");
    Student john("John",10,"CS");
    ofs<<john;
    ofs.close();

    Student student;
    ifstream ifs("Test.txt");
    ifs>>student;
    // cout << "Name" << student.name << endl; // not allowed // error: 'std::__cxx11::string Student::name' is private within this context
    cout << student << endl;
    ifs.close();
}



