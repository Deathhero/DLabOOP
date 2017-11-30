#include "Bus.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void CheckOutputFile(ostream &ofst);

void bus::Out(ofstream &ofst) {
	CheckOutputFile(ofst);
	ofst << "It is bus. Passenger capacity = " << passengercapacity << endl;
	car::Out(ofst);
}