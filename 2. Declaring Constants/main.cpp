/*
 * main.cpp
 *
 *  Created on: 14-Apr-2018
 *      Author: River
 */

#include "main.hpp"

int main(){

	const int num_football = 100;

	cout << "The number of footballs is " << num_football <<endl;

	/*
	 * The following would throw an error
	 * as num_football is a const, we
	 * cannot change it's value.
	 */

	/*num_football = 200;

	cout << "Num of footballs is " << num_football;

	*/

	return 0;
}


