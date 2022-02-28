#include <iostream>
using namespace std;

//First Structure for node
struct Object {
	int data;
	Object* next;
	Object(int d)
	{
		data = d;
		next = NULL;
	}
};

//Second Structure for queue
struct ListQueue {
	//Sets pointers
	Object* first;
	Object* last;
	ListQueue()
	{
		first = NULL;
		last = NULL;
	}
	// Adds object to queue
	void enQueue(int x)
	{
		// Creates Object
		Object* temp = new Object(x);

		// Checks if queue is empty and sets Object to First and Last
		if (last == NULL) {
			first = temp;
			last = temp;
			return;
		}
		// Adds new object to end of list
		last->next = temp;
		last = temp;
	}

	// Removes object from queue
	void deQueue()
	{
		// Checks if queue is empty and returns null
		if (first == NULL)
			return;

		// Stores first and moves to next node
		Object* temp = first;
		first = first->next;

		// Checks if first is NULL and then sets last to NULL
		if (first == NULL)
			last = NULL;

		delete (temp);
	}
};

int main()
{

	ListQueue q;
	q.enQueue(90);
	q.enQueue(420);
	q.enQueue(69);
	q.deQueue();
	cout << "Queue Front : " << (q.first)->data << endl;
	cout << "Queue Rear : " << (q.last)->data;
}