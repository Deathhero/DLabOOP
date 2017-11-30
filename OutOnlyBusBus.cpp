#include "Bus.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void bus::OutOnlyBus(ofstream &ofst) {
	Out(ofst);
}