#ifndef _car
#define _car
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

class car 
{
public:
	int enginepower;
	float fuelconsumption;
	// идентификация, порождение и ввод фигуры из потока
	static car* In(ifstream &ifst);
	virtual void InData(ifstream &ifst) = 0; // ввод
	virtual void Out(ostream &ofst) = 0;    // вывод 
	virtual void OutOnlyBus(ostream &ofst);    // вывод 
	virtual void OutOnlyTruck(ostream &ofst);    // вывод 
	virtual void OutOnlyPassengerCar(ostream &ofst);    // вывод 
	virtual void Multimethod(car* c, ostream &outFile) = 0;
	virtual void CheckWithTruck(ostream &outFile) = 0;
	virtual void CheckWithBus(ostream &outFile) = 0;
	virtual void CheckWithPassengerCar(ostream &outFile) = 0;
	virtual float Func() = 0;
	bool Compare(car *next);
};
#endif