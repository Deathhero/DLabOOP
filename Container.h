#ifndef _container
#define _container
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include "Car.h"

using namespace std;

// ���������� ��������� �� ������ ����������� �������
class container 
{
public:
	car *cont;
	int len;
	container *next;
	container *prev;
	container();   // ������������� ����������
	~container() { Clear(); }   // ���������� ����������

	void In(ifstream &ifst);  // ���� �����
	void Out(ostream &ofst);  // ����� �����
	void OutOnlyBus(ostream &ofst);
	void OutOnlyTruck(ostream &ofst);
	void OutOnlyPassengerCar(ostream &ofst);
	void Multimethod(ostream &outFile);
	void Clear();  // ������� ���������� �� �����
	void Sort(int d);
};
#endif