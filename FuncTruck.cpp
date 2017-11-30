#include "Truck.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

float truck::Func() 
{
	if (enginepower != 0) 
	{
		float k = float(carryingcapacity) / enginepower;
		if (abs((k / enginepower) - carryingcapacity) >= 0.00001)
		{
			cerr << "ERROR FUNC TRUCK OVERFLOW" << endl;
			return 0;
		}
		return k;
	}
	else
	{
		cout << "ERROR! Division by zero in func truck!" << endl;
		return 0;
	}
}