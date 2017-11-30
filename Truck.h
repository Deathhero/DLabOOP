#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include "Car.h"

#ifndef _truck
#define _truck

using namespace std;

class truck : public car 
{
public:
	int carryingcapacity;
	// переопределяем интерфейс класса
	void InData(ifstream &ifst);  // ввод 
	void Out(ostream &ofst);     // вывод 
	void OutOnlyTruck(ostream &ofst);
	void Multimethod(car* c, ostream &outFile);
	void CheckWithTruck(ostream &outFile);
	void CheckWithBus(ostream &outFile);
	void CheckWithPassengerCar(ostream &outFile);
	float Func();
	truck() {} // создание без инициализации.
};
#endif