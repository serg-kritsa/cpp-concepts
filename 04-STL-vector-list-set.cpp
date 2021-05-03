#include<iostream>
#include<vector>
#include<list>
#include<forward_list>
#include<set>
using namespace std;

int main()
{
	vector<int> data_v={2,4,6,8,10};
	data_v.push_back(20);
	data_v.push_back(30);
	vector<int>::iterator itr_v;
	cout<<"Using Iterator"<<endl;

	for(itr_v=data_v.begin();itr_v!=data_v.end();itr_v++) {
		cout<<++*itr_v<<endl;
	}
	cout<<"Using For Each Loop"<<endl;
	for(int x:data_v) {
		cout<<x<<endl;
	}
	// =================================
	list<int> data_l={2,4,6,8,10};
	data_l.push_back(20);
	data_l.push_back(30);
	list<int>::iterator itr_l;
	cout<<"Using Iterator"<<endl;

	for(itr_l=data_l.begin();itr_l!=data_l.end();itr_l++) {
		cout<<++*itr_l<<endl;
	}
	cout<<"Using For Each Loop"<<endl;
	for(int x:data_l) {
		cout<<x<<endl;
	}
	// =================================
	forward_list<int> data_fl={2,4,6,8,10};
	data_fl.push_front(20);
	data_fl.push_front(30);
	forward_list<int>::iterator itr_fl;
	cout<<"Using Iterator"<<endl;

	for(itr_fl=data_fl.begin();itr_fl!=data_fl.end();itr_fl++) {
		cout<<++*itr_fl<<endl;
	}
	cout<<"Using For Each Loop"<<endl;
	for(int x:data_fl) {
		cout<<x<<endl;
	}	
	// =================================
	set<int> data_s={2,4,6,8,10};
	data_s.insert(20);
	data_s.insert(30);
	set<int>::iterator itr_s;
	cout<<"Using Iterator"<<endl;

	for(itr_s=data_s.begin();itr_s!=data_s.end();itr_s++) {
		cout<<*itr_s<<endl;
	}
	cout<<"Using For Each Loop"<<endl;
	for(int x:data_s) {
		cout<<x<<endl;
	}
}

    
