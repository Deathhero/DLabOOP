#include "PassengerCar.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

float passengercar::Func() {
	if (enginepower != 0)
		return float(maxspeed) / enginepower;
	else {
		cout << "ERROR! Division by zero in func passenger car!" << endl;
		return 0;
	}
}