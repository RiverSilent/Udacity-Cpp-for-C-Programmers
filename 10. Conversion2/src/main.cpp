/*
 * main.cpp
 *
 *  Created on: 16-Apr-2018
 *      Author: River
 */

#include "main.h"

int main(){

	/* Prompt the user for the length of a room.
	 * Then prompt for the width of the room.
	 * Print out the area of the room.
	 */

	string input_length, input_width;
	float length = 0.0;
	float width = 0.0;

	float area = 0.0;

	cout << "Enter length of the room: " << endl;
	getline(cin,input_length);

	stringstream(input_length) >> length;

	cout << "Enter width of the room: " << endl;
	getline(cin,input_width);

	stringstream(input_width) >> width;

	area = length * width;

	cout << "The area of the room is " << area << " square units" << endl;

	return 0;
}

