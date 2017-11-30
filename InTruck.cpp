#include "Truck.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void CheckInputFile(ifstream &ifst);
void CheckWrongInput(ifstream &ifst);

void truck::InData(ifstream &ifst) 
{
	CheckInputFile(ifst);
	car::InData(ifst);
	ifst >> carryingcapacity;
	CheckWrongInput(ifst);
	if (carryingcapacity <= 0)
	{
		cout << "Incorrect values in truck input." << endl;
		exit(1);
	}
}