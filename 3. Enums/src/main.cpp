/*
 * main.cpp
 *
 *  Created on: 15-Apr-2018
 *      Author: River
 */

#include "main.h"

int main(){

	enum MONTH {Jan,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};

	MONTH best_month = Oct;

	if (best_month == Oct){
		cout << "You chose October!" << endl;
	}

	return 0;
}
