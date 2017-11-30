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
	// �������������, ���������� � ���� ������ �� ������
	static car* In(ifstream &ifst);
	virtual void InData(ifstream &ifst) = 0; // ����
	virtual void Out(ostream &ofst) = 0;    // ����� 
	virtual void OutOnlyBus(ostream &ofst);    // ����� 
	virtual void OutOnlyTruck(ostream &ofst);    // ����� 
	virtual void OutOnlyPassengerCar(ostream &ofst);    // ����� 
	virtual void Multimethod(car* c, ostream &outFile) = 0;
	virtual void CheckWithTruck(ostream &outFile) = 0;
	virtual void CheckWithBus(ostream &outFile) = 0;
	virtual void CheckWithPassengerCar(ostream &outFile) = 0;
	virtual float Func() = 0;
	bool Compare(car *next);
};
#endif