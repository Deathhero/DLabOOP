#include "Passengercar.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void passengercar::InData(ifstream &ifst) {
	car::InData(ifst);
	ifst >> maxspeed;
}