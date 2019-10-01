//This program contains cStack class 

#include <iostream>
#include "cNode.cpp"

using namespace std;

//Declared Cstack class
class cStack {

protected:
	cNode *top;

public:
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
		return ptr;
	}

	void print() const {
		if (top==NULL) {
			cout << "\nIt is empty\n";
		}
		else {
			cout << "\nThe data is:";
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
			temp.top =this->top;
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

class cque :protected cStack {

	cNode *tail;
public:

	cque() :tail(NULL) {};
	
	cque(cNode * &ptr) :cStack(ptr) { tail = top; };

	bool isNotEmpty() const {
		return cStack::isNotEmpty();
	}

	bool isEmpty() const {
		return cStack::isEmpty();
	}

	cNode * remove() {
		if (top->next != NULL) {
			tail = NULL;
		}
		return cStack::pop();
	}
	
	cque & add(cNode *& ptr) {
		if (tail) {
			tail->next = ptr;
			tail = tail->next;
		}
		else {
			tail = top = ptr;
		}
		tail->next = NULL;
		ptr = NULL;
		return *this;
	}

	cque (const cque & src) : cStack((cStack &)src) {
		tail = top; //Handeled the empty case


		while (tail) {
			if (!tail->next) {
				break;
			}
			tail = tail->next;
		}
	}/*
	cque (const cque & src){
		this->top = src.top;
		this->tail = src.tail;
		if (src.top) {
			cNode *sptr, *dptr;
			dptr = top = new cNode(*src.top);
			sptr = src.top->next;

			while (sptr) {
				dptr->next = new cNode(*sptr);
				dptr = dptr->next;
				sptr = sptr->next;
				
			}
			tail = dptr;
		}
	}
	*/
	cque & operator =(const cque &obj) {
		if (this == &obj) {
			return *this;
		}

		if (true) {
			cque temp;
			temp.top = top;
			temp.tail = tail;
		}
		if (true) {
			cque temp;
			temp = obj;
			top = temp.top;
			tail = temp.tail;
			temp.top = NULL;
			temp.tail = NULL;
			return *this;
		}
	}

	void print() const {
		cStack::print();
	}


};

#pragma once