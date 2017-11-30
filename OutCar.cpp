#include "Car.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void CheckOutputFile(ostream &ofst);

void car::Out(ostream &ofst) 
{
	CheckOutputFile(ofst);
	ofst << "Engine power = " << enginepower << endl;
	ofst << "Fuel consumption = " << fuelconsumption << endl;
}