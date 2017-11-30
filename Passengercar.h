#ifndef _passengercar
#define _passengercar
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include "Car.h"
using namespace std;

class passengercar : public car 
{
public:
	short int maxspeed;
	// переопределяем интерфейс класса
	void InData(ifstream &ifst);  // ввод 
	void Out(ostream &ofst);     // вывод 
	void OutOnlyPassengerCar(ostream &ofst);
	void Multimethod(car* c, ostream &outFile);
	void CheckWithTruck(ostream &outFile);
	void CheckWithBus(ostream &outFile);
	void CheckWithPassengerCar(ostream &outFile);
	float Func();
	passengercar() {} // создание без инициализации.
};
#endif