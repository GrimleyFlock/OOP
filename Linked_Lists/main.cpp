#include <iostream>
using namespace std;

class link
{
	public:
	string item;
	double cost;
	
	public:
	link* pnext;
	link(string i, double c)//Constructor
	{
		item = i;
		cost = c;
		pnext = NULL;
	}
		
		void display()
		{
			cout<<item<<" "<<cost<<" /-"<<endl;
		}	
};

class linkedlist
{
	private:
		link* pfirst;
		
	public:
		
			linkedlist()
		{
			pfirst=NULL;
		}
		
		void insert(string a, double b)
		{
			link* pnewlink=new link(a, b); //Create a link
			pnewlink->pnext=pfirst; //Point at next item
			pfirst=pnewlink; //Make first point at the new link
			
		}
		
		void displayList()
		{
			link* pcurrent=pfirst;
			
			while (pcurrent!=NULL)
			{
				
				pcurrent->display();
				pcurrent=pcurrent->pnext;
			
			}
		}
		
		void myDelete()
		{
			pfirst=pfirst->pnext;//Points to the next one
		}
		
		int searchStock()
		{
			link* pcurrent=pfirst;
			
			string x;
			cout<<"Key in the name of the item:"<<endl;
			cin>>x;
			
		
			while (pcurrent!=NULL)
			{
				
				if (pcurrent->item == x)
				{
					cout<<"Item found!"<<endl;
					return 0;
				}
				pcurrent=pcurrent->pnext;
			}
			cout<<"Not found"<<endl;
			return 0;
		}
		
		int linkDelete()
		{
			link* pcurrent=pfirst;
			link* prev = pfirst;
			
			string x;
			cout<<"Key in the name of the item to delete:"<<endl;
			cin>>x;
			
		
			while (pcurrent!=NULL)
			{
				
				if (pcurrent->item == x)
				{
					cout<<"Item found... Now deleting..."<<endl;
					prev->pnext=
				}
				prev = pcurrent;
				pcurrent=pcurrent->pnext;
			}
			cout<<"Not found"<<endl;
			return 0;
			
			
		}
	
};

int main() 
{
	linkedlist x;
	x.insert("Bread", 50.50);
	x.insert("Milk", 60.10);
	x.insert("Yoghurt", 70.00);
	
	x.displayList();
	
	//x.myDelete();
	
	//x.displayList();
	//x.searchStock();
	x.linkDelete();
	x.displayList();
	return 0;
}
