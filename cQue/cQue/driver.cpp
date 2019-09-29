
/*
The driver program to check everything defined in other heads
*/

#include<iostream>
#include"cNode.cpp"
#include"cStack.cpp"

using namespace std;

int operation(char opr, int *index);

int main() {
	
	//Declaring stack objects
	cStack obj1;
	cNode *n[5];
	n[0] = new cNode(1);
	n[1] = new cNode(2);
	n[2] = new cNode(3);
	n[3] = new cNode('/');
	n[4] = new cNode('-');
	n[5] = new cNode(4);
	n[6] = new cNode(5);
	n[7] = new cNode('+');
	n[8] = new cNode('*');

	obj1.push(n[0]);
	obj1.push(n[1]);
	obj1.push(n[2]);
	obj1.push(n[3]);
	obj1.push(n[4]);
	obj1.push(n[5]);
	obj1.push(n[6]);
	obj1.push(n[7]);
	obj1.push(n[8]);
	cout << "Printing the stack" << endl;
	obj1.print();

	return 0;
}

int operation(char opr, int *index) {
	if (opr == '+')
		return *index + *(index + 1);
	else if (opr == '-')
		return *index - *(index + 1);
	else if (opr == '*')
		return *index * *(index + 1);
	else if (opr == '/')
		return *index / *(index + 1);
	else
		return *index % *(index + 1);
}