#include <iostream>
using namespace std;

class student{
	private:
	int test[100];
	int s;
	
	
	public:
		void insert(){ 
			s = 5;
			int i;
			cout<<"Insert the 5 scores:"<<endl;
			
			for( i = 0; i < s; i ++){
				cin>>test[i];
			}
		}
		
		void display(){
			int i;
			cout<<"The ordered list is as follows: "<<endl;
			for( i = 0; i < s; i++){
				cout<<test[i]<<endl;
			}
		}
		
		int search(){
			int search_number, i;
			cout<<"Key in number to be searched: "<<endl;
			cin>>search_number;
			
			for( i = 0; i < s; i++){
				if ( test[i] == search_number){
					cout<<"Number Found!"<<endl;
					return 0;
				} 
				}
				cout<<"Not Found";
				return 0;
			}
			
		int num_delete(){
			int delete_number, i;
			cout<<"Key in number to be deleted: "<<endl;
			cin>>delete_number;
			
			for ( i = 0; i < s; i++){
				if (test[i] == delete_number){
					cout<<"Number Found"<<endl;
					break;
				}
			}
				if ( i == 5){
				cout<<"Not Found"<<endl;
				return 0;
			} else {
				for ( int j = i; j < 5; j++){
					test[j] = test[j+1];
				}	
			}
			s--;
				return 0;
			}
			
		void ordered_insert(){
			s = 5;
			int x, i ;
			for ( int a = 0; a < 5; a++)
			{
			
			cout<<"Enter a score to insert: "<<endl;
			cin>>x;
			
			for(i = 0; i < 5; i ++)
			{
				
			if(test[i] > x) //Correct Position
				break;
			}
		for (int j = 5; j > i; j--)
		{ 
			test[j] = test[j-1]; //Shift Position
		}
		test[i] = x; //Insert
	}
}	
		
};
	


int main() {
	
	student student_1;
	
	student_1.ordered_insert();
	student_1.display();
	
}
