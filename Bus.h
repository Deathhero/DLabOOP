#ifndef _bus
#define _bus
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include "Car.h"

using namespace std;

class bus : public car {
public:
	short int passengercapacity;
	// �������������� ��������� ������
	void InData(ifstream &ifst);  // ���� 
	void Out(ofstream &ofst);     // ����� 
	void OutOnlyBus(ofstream &ofst);
	float Func();
	bus() {} // �������� ��� �������������.
};
#endif