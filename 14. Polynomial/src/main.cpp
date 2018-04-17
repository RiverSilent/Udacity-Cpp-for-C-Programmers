/*
 * main.cpp
 *
 *  Created on: 17-Apr-2018
 *      Author: River
 */

#include "main.h"

int main(){

	/*
	 * User-defined three term polynomial
	 */

	int coeff1,coeff2,constant;
	int exp1,exp2;
	int y,x;

	cout << "Enter the first coefficient: " << endl;
	cin >> coeff1;
	cout << "Enter the second coefficient: " << endl;
	cin >> coeff2;
	cout << "Enter the constant: " << endl;
	cin >> constant;

	cout << "Enter the first exponent: " << endl;
	cin >> exp1;
	cout << "Enter the second exponent: " << endl;
	cin >> exp2;

	cout << "The polynomial to be solved is: y = " << coeff1 << "x^" << exp1 << " + " << coeff2 << "x^" << exp2 << " + " << constant << endl;

	cout << "Enter value of x: " << endl;
	cin >> x;
	y = (coeff1 * pow(x,exp1)) + (coeff2 * pow(x,exp2)) + constant;
	cout << "The value of y at x=" << x << " is " << y << endl;

	return 0;
}

