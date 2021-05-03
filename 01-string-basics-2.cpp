#include <iostream>
#include <cstring>

using namespace std;

int main()
{

//    char *s5 = new char[100];
//    cout<<"Enter a String: ";
//    cin>>s5;
//    cout << s5 <<endl;
//    cout<<"Length: " << strlen(s5) <<endl; // length of 1st word

//    char *s6 = new char[100];;
//    cout<<"Enter a String: ";
//    cin.getline(s6,100); // 2nd arg - max size
//    cout<< s6 << " Length: " << strlen(s6) <<endl; // length
//
    char s7[10]="Good";
    char s8[10]="Morning";
    strcat(s7,s8);
    cout<<s7 <<endl;  // GoodMorning
    strncat(s7,s8,3);
    cout<<s7 <<endl;  // GoodMorningMor

    return 0;
    
