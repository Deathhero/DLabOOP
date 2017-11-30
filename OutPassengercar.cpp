#include "Passengercar.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void passengercar::Out(ofstream &ofst) {
	ofst << "It is passenger car. Max speed = " << maxspeed << endl;
	car::Out(ofst);
}