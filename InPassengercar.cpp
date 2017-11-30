#include "Passengercar.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void CheckInputFile(ifstream &ifst);
void CheckWrongInput(ifstream &ifst);

void passengercar::InData(ifstream &ifst) {
	CheckInputFile(ifst);
	car::InData(ifst);
	ifst >> maxspeed;
	CheckWrongInput(ifst);
	if (maxspeed <= 0)
	{
		cout << "Incorrect values in passenger car input." << endl;
		exit(1);
	}
}