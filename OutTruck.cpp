#include "Truck.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void CheckOutputFile(ostream &ofst);

void truck::Out(ofstream &ofst) {
	CheckOutputFile(ofst);
	ofst << "It is truck. Carrying capacity = " << carryingcapacity << endl;
	car::Out(ofst);
}