//This program contains class named as cNode

#include <iostream>
using namespace std;

//declaring class cNode 
class cNode {

	int data;
	
public: 
	cNode *next;

	cNode() {};

	cNode(int d) :data(d) {};

	int getData() const {
		return data;
	}

	cNode & setData() {
		this->data = data;
	}

	void print() {
		cout << data << " ";
	}

};