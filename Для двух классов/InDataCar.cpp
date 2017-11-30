#include "Car.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void car::InData(ifstream &ifst) {
	ifst >> enginepower;
}