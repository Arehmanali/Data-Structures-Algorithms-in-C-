//This program contains cStack class 

#include <iostream>
#include "cNode.cpp"

using namespace std;

//Declared Cstack class
class cStack {

	

public:
	cNode *top;
	cStack() :top(NULL) {};
	cStack(cNode *& ptr) : top(ptr) {
		top->next = NULL;
		ptr = NULL;
	}

	bool isEmpty() const{
		if (top == NULL) {
			return true;
		}
		else {
			return false;
		}
	}

	bool isNotEmpty() const {
		if (top != NULL) {
			return true;
		}
		else {
			return false;
		}
	}

	cStack & push(cNode *& ptr) {
		ptr->next = top;
		top = ptr;
		ptr = NULL;
		return * this;
	}

	cNode * pop() {
		cNode * ptr = top;
		top = top->next;
		ptr->next = NULL;
	}

	void print() const {
		if (!top) {
			cout << "/nIt is empty/n";
		}
		else {
			cout << "/nThe data is:/n";
			cNode *ptr = top;
			while (ptr) {
				ptr->print();
				ptr = ptr->next;
			}
		}
	}

	cStack(const cStack & src) {
		this->top = src.top;
		if (src.top) {
			cNode *sptr, *dptr;
			dptr = top = new cNode(*src.top);
			sptr = src.top->next;

			while (sptr) {
				dptr->next = new cNode(*sptr);
				sptr = sptr->next;
				dptr = dptr->next;
			}
		}
	}

	cStack & operator = (const cStack & obj) {
		if (this == &obj) {
			return *this;
		}
		if (true) {
			cStack temp;
			temp.top = top;
		}
		if (true) {
			cStack temp;
			temp = obj;
			top = temp.top;
			temp.top = NULL;
			return *this;
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

};

class cQue : protected cStack {
	cNode *tail;
public:
	cQue() :tail(NULL) {};
	//Still needs verification
	cQue(cNode *& ptr) :cStack(ptr) { tail=top;}

	bool isNotEmpty() const {
		return cStack::isEmpty();
	}

	cNode * remove() {
		if (!top->next) {
			tail = NULL;
		}
		return cStack::pop();
	}

	cQue(const cQue & src) :cStack((cStack)&src) {

		tail = top;
		while (tail) 
			if (tail == NULL) {
				break;
			}
			tail = tail->next;
		}

	}


};