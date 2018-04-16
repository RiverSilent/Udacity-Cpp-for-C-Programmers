/*
 * main.cpp
 *
 *  Created on: 16-Apr-2018
 *      Author: River
 */

#include "main.h"

int main(){

	/*
	 * Accept the number of inches from the user and then convert it to yards
	 */

	string input_inches = "";
	float inches = 0.0;
	float yards = 0.0;

	cout << "Enter the number of inches: " <<endl;
	getline(cin,input_inches);
	stringstream(input_inches) >> inches;

	yards = inches/36.0;

	cout << "The number of yards in " << inches << " inches is " << yards <<endl;

	return 0;
}


