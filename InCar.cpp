#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "Truck.h"
#include "Passengercar.h"

using namespace std;

void CheckInputFile(ifstream &ifst);
void CheckWrongInput(ifstream &ifst);

car* car::In(ifstream &ifst) {
	CheckInputFile(ifst);
	car *a;
	int k;
	ifst >> k;
	CheckWrongInput(ifst);
	if (!(1 <= k && k <= 3)) {
		cerr << "Error: unknown type" << endl;
		exit(1);
	}
	if (ifst.eof()) {
		cerr << "Error: no data after type!" << endl;
		exit(1);
	}
	switch (k) {
	case 1:
		a = new truck;
		break;
	case 2:
		a = new bus;
		break;
	case 3:
		a = new passengercar;
		break;
	default:
		return 0;
	}
	a->InData(ifst);
	return a;
}