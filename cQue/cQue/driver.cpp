
/*
The driver program to check everything defined in other heads
*/

#include<iostream>
#include"cNode.cpp"
#include"cStack.cpp"

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
	



	cque obj2;
	cNode *ptr3 = new cNode(44444);
	obj2.add(ptr3);
	cNode *ptr4 = new cNode(44445);
	obj2.add(ptr4);
	cNode *ptr5 = new cNode(44446);
	obj2.add(ptr5);
	cNode *ptr6 = new cNode(44447);
	obj2.add(ptr6);
	obj2.print();
	obj2.remove();
	obj2.print();
	system("pause");
}
