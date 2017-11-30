#include "Bus.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void CheckInputFile(ifstream &ifst);
void CheckWrongInput(ifstream &ifst);

void bus::InData(ifstream &ifst) {
	CheckInputFile(ifst);
	car::InData(ifst);
	ifst >> passengercapacity;
	CheckWrongInput(ifst);
	if (passengercapacity <= 0)
	{
		cout << "Incorrect values in bus input." << endl;
		exit(1);
	}
}