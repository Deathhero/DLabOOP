#ifndef _container
#define _container
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include "Car.h"

using namespace std;

// ���������� ��������� �� ������ ����������� �������
class container {
	car *cont;
	int len;
	container *next;
	container *prev;
public:
	container();   // ������������� ����������
	~container() { Clear(); }   // ���������� ����������

	void In(ifstream &ifst);  // ���� �����
	void Out(ofstream &ofst);  // ����� �����
	void Multimethod(ofstream &ofst);
	void Clear();  // ������� ���������� �� �����
};
#endif