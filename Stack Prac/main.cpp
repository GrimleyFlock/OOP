#include <iostream>
using namespace std;

class StackX
{
	private:
		int myStack[10]; 
		int top=0; //top of stack

	public:
		void push(int j) //put item on top - insert
		{
			myStack[++top] = j; //increment top,
		} //insert item

		double pop() //take item from top - delete
		{
			return myStack[top--]; //access item,
		} //decrement top

		double peek() //peek at top of stack - display
		{
			return myStack[top];
		}
};

int main()
{

	StackX theStack; //make new stack, size 10
	theStack.push(20); //push items onto stack
	theStack.push(40);
	theStack.push(60);
	theStack.push(80);
	
	
	int i=4;
	while(i>0) //until it’s empty,
	{ //delete item from stack
		double value = theStack.pop();
		i--;
		cout << value << " "; //display it
	} //end while
	cout << endl;
	return 0;
} //end main()

	
