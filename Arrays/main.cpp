#include <iostream>
using namespace std;

class student{
	private:
	int score[5];
	string name;
	int i, student_1;
	int search_number;
	
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
		
		int search(){
			cout<<"Key in number to be searched: "<<endl;
			cin>>search_number;
			for( i = 0; i < 5; i++){
				if ( score[i] == search_number){
					cout<<"Number Found!"<<endl;
					return 0;
				} 
				}
			}
		
		}
	
};



int main() {
	
	student student_1;
		
	student_1.insert();
	student_1.display();
	
	student_1.search();

	
	return 0;
}
