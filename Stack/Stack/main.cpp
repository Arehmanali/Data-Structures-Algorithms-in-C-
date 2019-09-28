#include <iostream>
#include "cStack.cpp"
#include "cNode.cpp"

using namespace std;

int main() {
	cStack obj1;
	cNode obj2(20);
	obj1.push(&obj2);
	obj1.print();
}