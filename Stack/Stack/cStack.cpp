//This program contains cStack class 

#include <iostream>
#include "cNode.cpp"

using namespace std;

class cStack {

	cNode *top;
	
public:
	cStack() :top(NULL) {};

	cStack(cNode *&ptr) :top(ptr) {
		top->next = NULL;
		ptr = NULL;
	}

	bool isNotEmpty() const {
		if (top != NULL) {
			return true;
		}
		else {
			return false;
		}
	}

	bool isEmpty() const {
		if (top == NULL) {
			return true;
		}
		else {
			return false;
		}
	}

	cStack & push(cNode *&ptr) {
		ptr->next = top;
		top = ptr;
		ptr = NULL;
		return *this;
	}

	cNode * pop() {
		cNode *ptr;
		ptr = top;
		top = top->next;
		ptr->next = NULL;
		return ptr;
	}

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

	~cStack() {
		cNode *ptr = top;
		while (ptr) {
			ptr = ptr->next;
			delete top;
			top = ptr;
		}
	}

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

