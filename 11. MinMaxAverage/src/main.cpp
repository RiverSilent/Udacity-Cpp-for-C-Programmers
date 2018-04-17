/*
 * main.cpp
 *
 *  Created on: 17-Apr-2018
 *      Author: River
 */

#include "main.h"

int main(){

	/* Accept 15 numbers from the user and then return the
	 * min, max and the average of the numbers inputted.
	 */

	int max = 0;
	int min = 100000000;
	int num;
	int sum = 0;
	float average = 0.0;

	for (int i=0; i<5; i++){
		cout << "Enter a positive integer: " << endl;
		cin >> num;

		if (num > max){
			max = num;
		};
		if (num < min) {
			min = num;
		};
		sum += num;

	}

	average = sum / 5;
	cout << "The average of the numbers entered is " << average << endl;

	cout << "The minimum number entered is " << min << endl;

	cout << "The maximum number entered is " << max << endl;

	return 0;
}


