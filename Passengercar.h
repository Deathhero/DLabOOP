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
	// �������������� ��������� ������
	void InData(ifstream &ifst);  // ���� 
	void Out(ofstream &ofst);     // ����� 
	void OutOnlyPassengerCar(ofstream &ofst);
	void Multimethod(car* c, ofstream &outFile);
	void CheckWithTruck(ofstream &outFile);
	void CheckWithBus(ofstream &outFile);
	void CheckWithPassengerCar(ofstream &outFile);
	float Func();
	passengercar() {} // �������� ��� �������������.
};
#endif