#include "Truck.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

void truck::Multimethod(car* c, ostream &outFile)
{
	c->CheckWithTruck(outFile);
}