//This program contains cStack class 

#include <iostream>
#include "cNode.cpp"

using namespace std;

//Declared Cstack class
class cStack {

	cNode *top;
	
public:
	
	//Default constructor setting the value of top pointer to NULL
	cStack() :top(NULL) {};

	//Parameterized Constructor
	cStack(cNode *&ptr) :top(ptr) {
		top->next = NULL;
		ptr = NULL;
	}

	//Function to check if Stack is not empty
	bool isNotEmpty() const {
		if (top != NULL) {
			return true;
		}
		else {
			return false;
		}
	}

	//Function to check if stack is empty
	bool isEmpty() const {
		if (top == NULL) {
			return true;
		}
		else {
			return false;
		}
	}

	//Cascaded push function which addes a new node to Stack at top
	cStack & push(cNode *&ptr) {
		ptr->next = top;
		top = ptr;
		ptr = NULL;
		return *this;
	}

	//Cascaded pop function which removes the last node from Stack
	cNode * pop() {
		cNode *ptr;
		ptr = top;
		top = top->next;
		ptr->next = NULL;
		return ptr;
	}

	//Function to print the Stack
	void print() const {
		if (!top) {
			cout << "Stack is empty." << endl;
		}
		else {
			cNode *ptr;
			ptr = top;
			while (ptr) {
				ptr->print();
				ptr = ptr->next;
			}
		}
	}

	//Destructor
	~cStack() {
		cNode *ptr = top;
		while (ptr) {
			ptr = ptr->next;
			delete top;
			top = ptr;
		}
	}

	//Self Defined Copy Constructor
	cStack(const cStack & src) {
		this->top = src.top;
		if (src.top) {
			cNode *sPtr, *dPtr;
			dPtr = top = new cNode(*src.top);
			sPtr=src.top->next;
			while (sPtr) {
				dPtr->next = new cNode(*src.top);
				sPtr = sPtr->next;
				dPtr = dPtr->next;

			}
		}
	}

	//Self Defined Assignment Operator
	cStack & operator = (const cStack & rObj) {
		if (this == &rObj) {
			return *this;
		}if (true) {
			cStack temp;
			temp.top = top;
		}
		if (true) {
			cStack temp;
			temp = rObj;
			top = temp.top;
			temp.top = NULL;
			return *this;
		}
	}
};

