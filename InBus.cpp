#include "Bus.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void bus::InData(ifstream &ifst) {
	car::InData(ifst);
	ifst >> passengercapacity;
}