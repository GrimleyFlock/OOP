#include <iostream>
using namespace std;

class student
{
	private:
		int test[100], top;
		
	public:
		student()//Constructor
		{
			top = 0;	
		}
		void push(int x)//Data from outside for reusability
		{
			test[++top] = x;	
		}
		int pop()
		{
			return test[top--];	
		}
		void peek()
		{
			cout<<test[top]<<endl;
		}
		bool isempty()
		{
			if (top == 0)
			{
				return true;
			} else
			{
				return false;
			}
			
		}	
};



int main() 

{
	string x ;
	
	cout<<"Enter string containing delimiters and no whitespace: "<<endl;
	cin>>x;
	
	if(x.length() == 1)
	return 0;
	
	student s1;
	
	for (int j = 0; j < x.length(); j++)
	{
		char ch = x[j];
		switch(ch)
		{
			case '<':
			case '[':
			case '(':
			s1.push(ch);
			break;
			
			case '>':
			case ']':
			case ')':
			if (!s1.isempty())
			{
				char chx = s1.pop();
				if( (ch =='>' && chx!='<') || (ch ==']' && chx!='[') || (ch ==')' && chx!='('))
				{
					cout<<"Mismatched delimeter: "<<ch<<" at char"<<j<<endl;
					break;
				}
				
			}
		}
	}
	
return 0;
}
