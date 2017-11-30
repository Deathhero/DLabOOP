#ifndef _car
#define _car
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

class car {
public:
	int enginepower;
	float fuelconsumption;
	// идентификация, порождение и ввод фигуры из потока
public:
	static car* In(ifstream &ifst);
	virtual void InData(ifstream &ifst) = 0; // ввод
	virtual void Out(ofstream &ofst) = 0;    // вывод 
	virtual void OutOnlyBus(ofstream &ofst);    // вывод 
	virtual void OutOnlyTruck(ofstream &ofst);    // вывод 
	virtual void OutOnlyPassengerCar(ofstream &ofst);    // вывод 
	virtual float Func() = 0;
	bool Compare(car *next);
};
#endif