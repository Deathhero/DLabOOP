#include "Bus.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

float bus::Func() {
	if (enginepower != 0) {
		float k = float(passengercapacity) * 75 / enginepower;
		if (abs((k / enginepower) - (passengercapacity * 75)) >= 0.00001) {
			cerr << "ERROR FUNC BUS OVERFLOW" << endl;
			return 0;
		}
		return k;
	}
	else {
		cout << "ERROR! Division by zero in func bus!" << endl;
		return 0;
	}
}