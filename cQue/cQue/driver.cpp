
/*Testing on a new branch
The driver program to check everything defined in other heads
*/

#include<iostream>
#include"cNode.cpp"
#include"cStack.cpp"

using namespace std;


int main() {
	
	cque que1;

	cNode *ptr3 = new cNode(1000);
	que1.add(ptr3);

	cNode *ptr4 = new cNode(2000);
	que1.add(ptr4);

	cNode *ptr5 = new cNode(3000);
	que1.add(ptr5);

	cNode *ptr6 = new cNode(4000);
	que1.add(ptr6);

	que1.print();

	//Testing copy constructor
	cque que2(que1);
	que2.print();

	//Testing Overloaded assignment operator
	cque que3 = que2;
	que3.print();

	system("pause");
}
