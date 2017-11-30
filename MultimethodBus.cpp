#include "Bus.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

void bus::Multimethod(car* c, ofstream &outFile)
{
	c->CheckWithBus(outFile);
}