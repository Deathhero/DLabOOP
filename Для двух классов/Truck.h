#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include "Car.h"

#ifndef _truck
#define _truck

using namespace std;

class truck : public car {
public:
	int carryingcapacity;
	// �������������� ��������� ������
	void InData(ifstream &ifst);  // ���� 
	void Out(ofstream &ofst);     // ����� 
	void Multimethod(car* c, ofstream &outFile);
	void CheckWithBus(ofstream &outFile);
	void CheckWithTruck(ofstream &outFile);
	truck() {} // �������� ��� �������������.
};
#endif