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
	virtual void Out(ofstream &ofst) = 0;    // ����� 
	virtual void OutOnlyBus(ofstream &ofst);    // ����� 
	virtual void OutOnlyTruck(ofstream &ofst);    // ����� 
	virtual void OutOnlyPassengerCar(ofstream &ofst);    // ����� 
	virtual void Multimethod(car* c, ofstream &outFile) = 0;
	virtual void CheckWithTruck(ofstream &outFile) = 0;
	virtual void CheckWithBus(ofstream &outFile) = 0;
	virtual void CheckWithPassengerCar(ofstream &outFile) = 0;
	virtual float Func() = 0;
	bool Compare(car *next);
};
#endif