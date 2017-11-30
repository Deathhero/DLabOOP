#include "Truck.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

void truck::Multimethod(car* c, ofstream &outFile)
{
	c->CheckWithTruck(outFile);
}