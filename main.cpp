#include <iostream>
#include "queue.h"


using namespace std;

int main()
{
	Queue q1;
	q1.push(1);
	q1.push(12);
	q1.push(4);
	q1.push(43);
	q1.push(10);
	
	
	cout << "Size : " << q1.size() << endl;
	cout << "Front: " << q1.front() << endl;
	cout << "Back : " << q1.back() << endl;
	
	q1.pop();
 	q1.push(55);
    	q1.push(60);

    	cout << "\nSetelah melakukan Pop dan Push:" << endl;
   	cout << "Size : " << q1.size() << endl;
    	cout << "Front: " << q1.front() << endl;
    	cout << "Back : " << q1.back() << endl;
	
	q1.pop();
	q1.push(60);
	
	cout << "\nSetelah melakukan Pop dan Push ke-2:" << endl;
    	cout << "Size : " << q1.size() << endl;
    	cout << "Front: " << q1.front() << endl;
    	cout << "Back : " << q1.back() << endl;
	
	cout << "Elements in queue: ";
	
	while(!q1.empty())
	{
		cout << q1.front() << ' ';
		q1.pop();
	}
	cout << endl;
	
		
	return 0;
	
}
