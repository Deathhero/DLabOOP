#include "Bus.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void CheckOutputFile(ostream &ofst);

void bus::OutOnlyBus(ofstream &ofst) 
{
	CheckOutputFile(ofst);
	Out(ofst);
}