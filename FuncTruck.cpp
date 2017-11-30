#include "Truck.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

float truck::Func() {
	if (enginepower != 0)
		return float(carryingcapacity) / enginepower;
	else {
		cout << "ERROR! Division by zero in func truck!" << endl;
		return 0;
	}
}