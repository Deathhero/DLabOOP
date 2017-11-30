#include "PassengerCar.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

float passengercar::Func() 
{
	if (enginepower != 0)
	{
		float k = float(maxspeed) / enginepower;
		if (abs((k / enginepower) - maxspeed) >= 0.00001)
		{
			cerr << "ERROR FUNC PASSENGER CAR OVERFLOW" << endl;
			return 0;
		}
		return k;
	}
	else
	{
		cout << "ERROR! Division by zero in func passenger car!" << endl;
		return 0;
	}
}