#include "Car.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void CheckOutputFile(ostream &ofst);

void car::OutOnlyBus(ostream &ofst)
{
	CheckOutputFile(ofst);
	ofst << endl;
}