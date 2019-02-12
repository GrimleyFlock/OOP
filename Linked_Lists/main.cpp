#include <iostream>
using namespace std;

class link
{
	private:
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
	
};

int main() 
{
	linkedlist x;
	x.insert("Bread", 50.50);
	x.insert("Milk", 60.10);
	
	x.displayList();
	system("pause");
	return 0;
}
