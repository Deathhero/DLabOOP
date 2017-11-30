#include "Car.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void car::Out(ofstream &ofst) {
	ofst << "Engine power = " << enginepower << endl;
	ofst << "Fuel consumption = " << fuelconsumption << endl;
}