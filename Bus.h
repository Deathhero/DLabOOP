#ifndef _bus
#define _bus
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include "Car.h"

using namespace std;

class bus : public car 
{
public:
	short int passengercapacity;
	// переопределяем интерфейс класса
	void InData(ifstream &ifst);  // ввод 
	void Out(ostream &ofst);     // вывод 
	void OutOnlyBus(ostream &ofst);
	void Multimethod(car* c, ostream &outFile);
	void CheckWithTruck(ostream &outFile);
	void CheckWithBus(ostream &outFile);
	void CheckWithPassengerCar(ostream &outFile);
	float Func();
	bus() {} // создание без инициализации.
};
#endif