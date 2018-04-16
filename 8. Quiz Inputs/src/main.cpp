/*
 * main.cpp
 *
 *  Created on: 16-Apr-2018
 *      Author: River
 */

#include "main.h"

int main(){

	/*
	 * Write a program that prompts two users for their
	 * name, address, and phone number.
	 * Print the information to the console in the following format:
	 * name
	 * \/t\/t address
	 * \/t\/tphone number
	 */

	string name1,addr1,phone1;
	string name2,addr2,phone2;
	cout << "Hello User 1! Please enter your name: " <<endl;
	getline(cin,name1);
	cout << "Please enter your address: " << endl;
	getline(cin,addr1);
	cout << "Please enter your phone number: " << endl;
	getline(cin,phone1);

	cout << "Hello User 2! Please enter your name: " << endl;
	getline(cin,name2);
	cout << "Please enter your address: " << endl;
	getline(cin, addr2);
	cout << "Please enter your phone number: " << endl;
	getline(cin,phone2);

	cout << "Name: " << name1 << "\n" << "\t\t" << "Address: " << addr1 << "\n" << "\t\t" << "Phone: " << phone1 << endl;

	cout << "Name: " << name2 << "\n" << "\t\t" << "Address: " << addr2 << "\n" << "\t\t" << "Phone: " << phone2 << endl;

	return 0;
}

