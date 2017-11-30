#include "Truck.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void CheckOutputFile(ostream &ofst);

void car::OutOnlyTruck(ostream &ofst)
{
	CheckOutputFile(ofst);
	ofst << endl;
}