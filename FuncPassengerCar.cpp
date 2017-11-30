#include "PassengerCar.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

float passengercar::Func() {
	return float(maxspeed) / enginepower;
}