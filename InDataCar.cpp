#include "Car.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void CheckInputFile(ifstream &ifst);
void CheckWrongInput(ifstream &ifst);

void car::InData(ifstream &ifst) {
	CheckInputFile(ifst);
	ifst >> enginepower >> fuelconsumption;
	if (enginepower <= 0 || fuelconsumption <= 0 )
	{
		cout << "Incorrect values in car input." << endl;
		exit(1);
	}
}