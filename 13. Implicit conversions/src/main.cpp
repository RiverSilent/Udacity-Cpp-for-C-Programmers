/*
 * main.cpp
 *
 *  Created on: 17-Apr-2018
 *      Author: River
 */

#include "main.h"

int main(){

	int a = 3;
	float b = 3.4;
	char c = 'c';

	// We can assign an int to a float
	b = a;
	cout << "b is : " << b << endl;

	// We can assign a char to a float
	b = c;
	cout << "b is now: " << b << endl;

	// Assigning a float to an int leads to truncation
	float d = 9.8;
	int e;

	e = d;
	cout << "e is: " << e << endl;

	// Assigning float to a char does NOT work

	char t;
	float f = 6.7;

	t = f;
	cout << "t is " << t << endl;

	return 0;
}

