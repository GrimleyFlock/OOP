#include <iostream>
using namespace std;

class student{
	private:
	int score[5];
	string name;
	int i, student_1;
	
	public:
		void insert(){
			cout<<"Enter name: "<<endl;
			cin>>name;
			cout<<"Insert the 5 scores:"<<endl;
			
			for( i = 0; i < 5; i ++){
				cin>>score[i];
			}
		}
		
		void display(){
			cout<<"Your name is: "<<name<<" and your scores are: "<<endl;
			for( i = 0; i < 5; i++){
				cout<<score[i]<<endl;
			}
		}
	
};



int main() {
	
	student student_1;
	
	student_1.insert();
	student_1.display();
	
	return 0;
}
