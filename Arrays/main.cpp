#include <iostream>
using namespace std;

class student{
	private:
	int score[5];
	string name;
	int i, student_1;
	int search_number;
	int s;
	
	
	public:
		void insert(){
			s = 5;
			cout<<"Enter name: "<<endl;
			cin>>name;
			cout<<"Insert the 5 scores:"<<endl;
			
			for( i = 0; i < s; i ++){
				cin>>score[i];
			}
		}
		
		void display(){
			cout<<"Your name is: "<<name<<" and your scores are: "<<endl;
			for( i = 0; i < s; i++){
				cout<<score[i]<<endl;
			}
		}
		
		int search(){
			cout<<"Key in number to be searched: "<<endl;
			cin>>search_number;
			for( i = 0; i < s; i++){
				if ( score[i] == search_number){
					cout<<"Number Found!"<<endl;
					return 0;
				} 
				}
			}
			
		int num_delete(){
			int delete_number, i;
			cout<<"Key in number to be deleted: "<<endl;
			cin>>delete_number;
			
			for ( i = 0; i < s; i++){
				if (score[i] == delete_number){
					cout<<"Number Found"<<endl;
					break;
				}
			}
				if ( i == 5){
				cout<<"Not Found"<<endl;
				return 0;
			} else {
				for ( int j = i; j < 5; j++){
					score[j] = score[j+1];
				}	
			}
			s--;
				return 0;
			}
		
	};
	




int main() {
	
	student student_1;
		
	student_1.insert();
	student_1.display();
	
	student_1.num_delete();
	student_1.display();
	
	return 0;
}
