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
			cout<<item<<" "<<cost<<"/-"<<endl;
		}	
};

class linkedlist
{
	private:
		link* pfirst;
		link* plast;
		
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
		
		void insertlast(string a, double b)//Turns the linked list into a queue
		{
			link* pnewlink = new link(a ,  b); //make new link
			if( pfirst==NULL) //if empty list,
			pfirst = pnewlink; //first --> newLink
			else
			plast->pnext = pnewlink; //old last --> newLink
			plast = pnewlink; //newLink <-- last
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
					prev->pnext=pcurrent->pnext;
				}
				prev = pcurrent;
				pcurrent=pcurrent->pnext;
			}
			cout<<"Not found"<<endl;
			return 0;
			
			
		}
		
		int ordered_insert(string i, double j)
		{
			link* pnewlink=new link(i,j);
			link* prev=NULL;
			link* pcurrent=pfirst;
			
			
			while (pcurrent != NULL && i > pcurrent->item)
			{
				prev=pcurrent;
				pcurrent=pcurrent->pnext;
			}
			if(prev==NULL)
			{
				pfirst=pnewlink;
			}
			else
			{
				prev->pnext=pnewlink;
				pnewlink->pnext=pcurrent;
			}
		}
		
		void addTotal()
		{
			link* pcurrent=pfirst;
			int total;
			while(pcurrent!=NULL)
			{
				total=total+pcurrent->cost;
				pcurrent=pcurrent->pnext;
			}
			cout<<"Total is: "<<total<<endl;	
		}
		
		void greaterFifty()
		{
			link* pcurrent=pfirst;
			while(pcurrent!=NULL)
			{
				if(pcurrent->cost)
				{
					pcurrent->display();
				}
				pcurrent=pcurrent->pnext;
			}
		}
		
		
	
};

int main() 
{
	linkedlist x,y;
	//x.insert("Bread", 50.50);
	//x.insert("Milk", 60.10);
	//x.insert("Yoghurt", 70.00);
	//x.displayList();
	//x.myDelete();
	//x.displayList();
	//x.searchStock();
	//x.linkDelete();
	//x.displayList();
	x.insertlast("Eggs", 56.25);
	x.insertlast("Bananas", 20.20);
	x.insertlast("Omo", 41.00);
	x.insertlast("Ushindi", 25.30);
	cout<<"QUEUE"<<endl;
	x.displayList();
	
	y.insert("Eggs", 56.25);
	y.insert("Bananas", 20.20);
	y.insert("Omo", 41.00);
	y.insert("Ushindi", 25.30);
	cout<<"STACK"<<endl;
	y.displayList();
	return 0;
}
