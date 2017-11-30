#ifndef _bus
#define _bus
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include "Car.h"

using namespace std;

class bus : public car {
public:
	short int passengercapacity;
	// переопределяем интерфейс класса
	void InData(ifstream &ifst);  // ввод 
	void Out(ofstream &ofst);     // вывод 
	void Multimethod(car* c, ofstream &outFile);
	void CheckWithBus(ofstream &outFile);
	void CheckWithTruck(ofstream &outFile);
	bus() {} // создание без инициализации.
};
#endif