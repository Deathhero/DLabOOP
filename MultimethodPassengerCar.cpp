#include "Passengercar.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

void passengercar::Multimethod(car* c, ofstream &outFile)
{
	c->CheckWithPassengerCar(outFile);
}