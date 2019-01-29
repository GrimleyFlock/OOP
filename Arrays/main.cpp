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
			cout<<"The list is as follows: "<<endl;
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
 int binarysearch()
 {
 	int low = 0, up = 4, mid, x;
 	cout<<"Enter a score to search for: "<<endl;
 	cin>>x;
 	for (int i = 0; i < 5; i ++)
 	{
 		mid = ( low + up)/2;
 		
 		if ( test [mid]== x)
 		{
 			cout<<"Found! "<<endl;
 			return 0;
		 }
		 else if ( low > up)
		 {
		 	cout<<"Not Found! "<<endl;
		 	return 0;
		 }
		 else if ( x > test[mid])
		 {
		 	low = mid + 1;
		 }
		 else if (x < test[mid])
		 {
		 	up = mid - 1;
		 }
	}
 }
 
 void bubblesort()
 {
 	for ( int j = 5; j > 1; j--)
 	{
	 
 	for ( int i = 0; i < 5; i++)
	 {
	 	if ( test[i] > test[i + 1])
		 {
	 		int temp = test [i + 1];
	 		test [i + 1] = test[i];
	 		test[i] = temp;
		 }
	 }
	}
 	
 }
 
 void insertionSort()
 {
 	int in, out;
 	for( out = 1; out < 5; out++)
 	{
 		double temp = test[out];
 		in = out;
 		while ( in > 0 && test[in - 1] >= temp)
 		{
 			test[in] = test[in - 1];
 			--in;
		 }
		 test[in] = temp;
	 }
 	
 }
	
		
};
	


int main() {
	
	student student_1;
	
	student_1.insert();
	student_1.insertionSort();
	//student_1.binarysearch();
	cout<<endl;
	student_1.display();

	
}
