#include "Bus.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

float bus::Func() {
	return float(passengercapacity) * 75 / enginepower;
}