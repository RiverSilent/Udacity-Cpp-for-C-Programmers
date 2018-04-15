/*
 * main.cpp
 *
 *  Created on: 15-Apr-2018
 *      Author: River
 */

#include "main.h"

int main(){

	int year = 0;
	int age = 0;
	string name = "";

	cout << "What is your favorite year?" <<endl;
	cin >> year;
	cout << "How interesting! Your favorite year is " << year <<endl;
	cout << "At what age did you learn to ride a bike? " <<endl;
	cin >> age;
	cout << "That's impressive! You learnt to bike at the age of " << age <<endl;
	cout << "What's your name??" << endl;
	cin >> name;
	cout << "Hello " << name << "!!!" << endl;

	return 0;
}

