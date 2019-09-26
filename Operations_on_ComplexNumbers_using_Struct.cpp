// linked list.cpp : 1.	Write a program to add, subtract and multiply two complex numbers using structures to function.
//

#include "pch.h"
#include <iostream>
#include <cstring>

using namespace std;


//Struct  
struct complexNumbers {
	int realNumber;
	int imaginaryNumber;

};

//function to add two complex Numbers
complexNumbers addTwoComplexNumbers(complexNumbers complexNumber1, complexNumbers complexNumber2) {

	complexNumbers result;

	result.realNumber = (complexNumber1.realNumber)+(complexNumber2.realNumber);
	result.imaginaryNumber = ((complexNumber1.imaginaryNumber+complexNumber2.imaginaryNumber));


	

	return result;
}

//function to subtract two numbers
complexNumbers subtractTwoComplexNumbers(complexNumbers complexNumber1, complexNumbers complexNumber2) {

	complexNumbers result;

	result.realNumber = (complexNumber1.realNumber)-(complexNumber2.realNumber);
	result.imaginaryNumber = ((complexNumber1.imaginaryNumber-complexNumber2.imaginaryNumber));


	return result;

}

//function to multiply two numbers
complexNumbers multiplyTwoComplexNumbers(complexNumbers complexNumber1, complexNumbers complexNumber2) {

	complexNumbers result;

	result.realNumber = (complexNumber1.realNumber)*(complexNumber2.realNumber);
	result.imaginaryNumber = ((complexNumber1.imaginaryNumber*complexNumber2.imaginaryNumber)*(-1));




	return result;

}






int main() {
	//declaring two objects
	complexNumbers object1;
	complexNumbers object2;
	complexNumbers object3;
	complexNumbers object4;
	complexNumbers object5;

	object1.realNumber = 4;
	object1.imaginaryNumber = 4;

	
	object2.realNumber = 3;
	object2.imaginaryNumber = 3;


	object3=addTwoComplexNumbers(object1, object2);
	if (object3.imaginaryNumber < 0) {

		cout << "The sum of two complex Numbers is: " << object3.realNumber << object3.imaginaryNumber << "i" << endl;
	}
	else {

		cout << "The sum of two complex Numbers is: " << object3.realNumber << "+" << object3.imaginaryNumber << "i" << endl;

	}

	object5=subtractTwoComplexNumbers(object1, object2);
	if (object5.imaginaryNumber < 0) {

		cout << "The sum of two complex Numbers is: " << object5.realNumber << object5.imaginaryNumber << "i" << endl;
	}
	else {

		cout << "The sum of two complex Numbers is: " << object5.realNumber << "+" << object5.imaginaryNumber << "i" << endl;

	}


	object4=multiplyTwoComplexNumbers(object1, object2);
	if (object4.imaginaryNumber < 0) {

		cout << "The product of two complex Numbers is: " << object4.realNumber << object4.imaginaryNumber << "i" << endl;
	}
	else {

		cout << "The product of two complex Numbers is: " << object4.realNumber << "+" << object4.imaginaryNumber << "i" << endl;

	}


	return 0;
}
