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
	// �������������, ���������� � ���� ������ �� ������
public:
	static car* In(ifstream &ifst);
	virtual void InData(ifstream &ifst) = 0; // ����
	virtual void Out(ofstream &ofst) = 0;    // ����� 
	virtual void OutOnlyBus(ofstream &ofst);    // ����� 
	virtual void OutOnlyTruck(ofstream &ofst);    // ����� 
	virtual void OutOnlyPassengerCar(ofstream &ofst);    // ����� 
	virtual float Func() = 0;
	bool Compare(car *next);
};
#endif