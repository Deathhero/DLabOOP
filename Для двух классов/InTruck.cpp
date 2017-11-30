#include "Truck.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void truck::InData(ifstream &ifst) {
	car::InData(ifst);
	ifst >> carryingcapacity;
}