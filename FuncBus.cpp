#include "Bus.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

float bus::Func() {
	if (enginepower != 0)
		return float(passengercapacity) * 75 / enginepower;
	else {
		cout << "ERROR! Division by zero in func bus!" << endl;
		return 0;
	}
}