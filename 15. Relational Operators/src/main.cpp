/*
 * main.cpp
 *
 *  Created on: 22-Apr-2018
 *      Author: River
 */

#include "main.h"

int main(){

	int a = 100;
	int b = 33;
	int c = 33;

	string strBool[] = {"False","True"};

	cout << "a > b is " << strBool[a>b] << endl;
	cout <<"a not equal to b is " << strBool[a!=b] << endl;
	cout <<"b is greater than c is " << strBool[b>c] << endl;
	return 0;
}

