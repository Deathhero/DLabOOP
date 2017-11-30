#include "Bus.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void bus::Out(ofstream &ofst) {
	ofst << "It is bus. Passenger capacity = " << passengercapacity << endl;
	car::Out(ofst);
}