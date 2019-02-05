#include <iostream>
using namespace std;

class student
{
	string test[5];
	int rear, front, N;
	
	public:
	student()//Constructor for initialization
	{
		rear = 0;
		front = 0;
		N = 0;
	}
	
void enqueue(string x)
{
	test[rear++] = x;
	 
	if (rear > 4 )//Wrap Around
	{
		rear = 0;
	}
		
	N++;
}

string dequeue()
{
	if (front > 4)//Wrap Around
	{ 
		front = 0;
	}
	N--;
	return test[front++];			
}

void peek()
{
	cout<<test[front]<<endl;
}
	
	
};


int main() 
{
	student s1;
	string x;
	
	cout<<"Enter names "<<endl;
	for(int i = 0; i < 5; i++)
	{
		cin>>x;
		s1.enqueue(x);
	}
	
	cout<<endl;
	s1.peek();
	
	cout<<"Deleted: "<<s1.dequeue()<<endl;
	s1.peek();
	
	return 0;
}
