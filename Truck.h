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
	// �������������� ��������� ������
	void InData(ifstream &ifst);  // ���� 
	void Out(ostream &ofst);     // ����� 
	void OutOnlyTruck(ostream &ofst);
	void Multimethod(car* c, ostream &outFile);
	void CheckWithTruck(ostream &outFile);
	void CheckWithBus(ostream &outFile);
	void CheckWithPassengerCar(ostream &outFile);
	float Func();
	truck() {} // �������� ��� �������������.
};
#endif