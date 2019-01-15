#include <iostream>
using namespace std;
class student
{
	private:
	string name;
	int t1, t2, total;
	
	public:
	void insert(){
		cout<<"Enter name:"<<endl;
		cin>>name;
		
		cout<<"Enter Test 1: "<<endl;
		cin>>t1;
		
		cout<<"Enter Test 2"<<endl;
		cin>>t2;	
	}
	
	void display(){
		cout<<"Name: "<<name<<endl;
		cout<<"Test 1: "<<t1<<endl;
		cout<<"Test 2: "<<t2<<endl;
		cout<<"Total: "<<total<<endl;
		
	}
	
	void get_total(){
		total = t1 + t2;
		
	}
};


int main() {
	student s1, s2;
	
	s1.insert();
	s1.get_total();
	s1.display();
	
	s2.insert();
	s2.get_total();
	s2.display();
	
}
