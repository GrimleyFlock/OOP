#include <iostream>
using namespace std;
class Queue
{
private:
int myQueue[10]; 
int front, rear, N;

public:
Queue()
{front=0;
rear=0;
N=0;	
}
void insert(int j) //put item at rear of queue
{myQueue[rear++] = j; //increment rear and insert
if(rear > 9) //wraparound
rear = 0;

N++;
}

int remove() //take item from front of queue
{
int itemremoved = myQueue[front++]; //get value and incr front
if(front > 9) //deal with wraparound
front = 0;
N--;
return itemremoved;
}
int peekFront() //peek at front of queue
{ return myQueue[front]; }

bool isEmpty() //true if queue is empty
{ return (N==0); }

};
int main()
{
Queue theQueue; //queue holds 5 items
theQueue.insert(10); //insert 4 items
theQueue.insert(20);
theQueue.insert(30);
theQueue.insert(40);
theQueue.remove(); //remove 3 items
theQueue.remove(); // (10, 20, 30)
theQueue.remove();
theQueue.insert(50); //insert 4 more items
theQueue.insert(60); // (wraps around)
theQueue.insert(70);
theQueue.insert(80);

while( !theQueue.isEmpty() ) //while not empty, remove and display
{ // all items
int n = theQueue.remove(); //(40, 50, 60, 70, 80)
cout << n << " ";
}
cout << endl;
return 0;
} //end main()



