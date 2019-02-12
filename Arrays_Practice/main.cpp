#include <iostream>
using namespace std;

class myArray
{
	private:
		int box[4];
		int search_number;//User keys in number to be searched
		int s;
		
	public:
		void insertBox()
		{
			s = 4;
			for (int i = 0; i < s; i++)
			{
				cout<<"Key in a number: "<<endl;
				cin>>box[i];
			}
			cout<<endl;
		}
		
		void displayBox()
		{
			cout<<"The numbers you entered are: "<<endl;
			for (int i = 0; i < s; i++ )
			{
				cout<<box[i]<<endl;
			}
		}
		
		void searchBox()
		{
			cout<<"Key in the number you are looking for: "<<endl;
			cin>>search_number;
			for (int i = 0; i < s; i++)
			{
				if (box[i] == search_number)
				{
					cout<<"Number Found!"<<endl;
					break;
				} else
				{
					cout<<"Number not found!"<<endl;
					break;	
				}
			}
		}
		
		void deleteBox()
		{
			int delete_number;
			cout<<"Key in the number you want to delete: "<<endl;
			cin>>delete_number;
			for (int i = 0; i < s; i++)
			{
				if (box[i] == delete_number)
				{
					cout<<"Number Found!"<<endl;
					break;
				}  else if (i == 4)
				{
					cout<<"Number not found!"<<endl;
					break;	
				} else
				{
					for (int j = i; j < 4; j++)
					{
						box[j] = box[j + 1];
					}
				}
				s--;
			}
			
		}
};



int main()
{
	myArray array1;
	
	array1.insertBox();
	array1.displayBox();
//	array1.searchBox();
	array1.deleteBox();
	array1.displayBox();
	
	return 0;
}
