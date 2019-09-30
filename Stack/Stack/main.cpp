#include <iostream>
#include "cStack.cpp"
#include "cNode.cpp"

using namespace std;

int main() {

	//Declaring stack objects
	cStack obj1;
	cNode *ptr = new cNode(3823);
	obj1.push(ptr);
	cNode *ptr1 = new cNode(38123);
	obj1.push(ptr1);
	cNode *ptr2 = new cNode(381123);
	obj1.push(ptr2);
	cout << "Printing the stack" << endl;
	obj1.print();
	obj1.pop();
	obj1.print();
	system("pause");
	return 0;
}