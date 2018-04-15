/*
 * main.cpp
 *
 *  Created on: 15-Apr-2018
 *      Author: River
 */

#include "main.h"

int main(){

	/*
	 * Print the variables in three columns:
	 * Ints, Floats, Doubles
	*/

	int a = 45;
	float b = 45.323;
	double c = 45.5468;
	int aa = a + 9;
	float bb = b + 9;
	double cc = c + 9;
	int aaa = aa + 9;
	float bbb = bb + 9;
	double ccc = cc + 9;

	cout << "Ints" << setw(10) << "Floats" << setw(12) << "Doubles" <<endl;

	cout << a <<setw(12) << b <<setw(12) << c <<endl;

	cout << aa << setw(12) << bb <<setw(12) << cc << endl;

	cout << aaa << setw (12) << bbb << setw(12) << ccc <<endl;

	return 0;
}

