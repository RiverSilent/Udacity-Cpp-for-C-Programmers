/*
 * main.cpp
 *
 *  Created on: 22-Apr-2018
 *      Author: River
 */

#include "main.h"

int main(){

	int a,b = 1;
	int c,d = 0;

	string strBool[] = {"False","True"};

	cout << "a && b is " << strBool[a&&b] << endl;
	cout << "b || c is " << strBool[b||c] << endl;
	cout << "!(a&&(b||d||c)) is " << strBool[!(a&&(b||d||c))] << endl;

	return 0;
}


