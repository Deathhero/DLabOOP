#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include "Car.h"

#ifndef _truck
#define _truck

using namespace std;

class truck : public car {
public:
	int carryingcapacity;
	// переопределяем интерфейс класса
	void InData(ifstream &ifst);  // ввод 
	void Out(ofstream &ofst);     // вывод 
	void Multimethod(car* c, ofstream &outFile);
	void CheckWithBus(ofstream &outFile);
	void CheckWithTruck(ofstream &outFile);
	truck() {} // создание без инициализации.
};
#endif