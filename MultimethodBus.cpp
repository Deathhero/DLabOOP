#include "Bus.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

void bus::Multimethod(car* c, ostream &outFile)
{
	c->CheckWithBus(outFile);
}