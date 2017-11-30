#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "Truck.h"

using namespace std;

car* car::In(ifstream &ifst) {
	car *a;
	int k;
	ifst >> k;
	switch (k) {
	case 1:
		a = new truck;
		break;
	case 2:
		a = new bus;
		break;
	default:
		return 0;
	}
	a->InData(ifst);
	return a;
}