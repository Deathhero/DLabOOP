#ifndef _passengercar
#define _passengercar
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include "Car.h"

using namespace std;

class passengercar : public car {
public:
	short int maxspeed;
	// �������������� ��������� ������
	void InData(ifstream &ifst);  // ���� 
	void Out(ofstream &ofst);     // ����� 
	passengercar() {} // �������� ��� �������������.
};
#endif