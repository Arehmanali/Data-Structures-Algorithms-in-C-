//This program contains class named as cNode
#include <iostream>
using namespace std;
//Declaring class cNode 
class cNode {

	//Private data member to hold value
	int data;
	char oprerator;
public:

	//Declaring a pointer named as next of cNode data type
	cNode *next;

	//Default constructor	
	cNode() {};

	//Parameterized Constuctor
	cNode(int d) : data(d) {};

	//Function to get data
	int getData() {
		return data;
	}

	//Function to set Data
	cNode & setData() {
		this->data = data;
	}
	//Function to return operator
	char getOpr() {
		return oprerator;
	}

	//Function to Print Data
	void print() {
		cout << data << " ";
	}
};
#pragma once