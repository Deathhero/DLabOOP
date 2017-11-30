#include "PassengerCar.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void CheckOutputFile(ostream &ofst);

void passengercar::OutOnlyPassengerCar(ostream &ofst)
{
	CheckOutputFile(ofst);
	Out(ofst);
}