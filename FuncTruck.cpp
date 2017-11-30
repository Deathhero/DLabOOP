#include "Truck.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

float truck::Func() {
	return float(carryingcapacity) / enginepower;
}