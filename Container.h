#ifndef _container
#define _container
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include "Car.h"

using namespace std;

// Простейший контейнер на основе одномерного массива
class container 
{
public:
	car *cont;
	int len;
	container *next;
	container *prev;
	container();   // инициализация контейнера
	~container() { Clear(); }   // утилизация контейнера

	void In(ifstream &ifst);  // ввод фигур
	void Out(ostream &ofst);  // вывод фигур
	void OutOnlyBus(ostream &ofst);
	void OutOnlyTruck(ostream &ofst);
	void OutOnlyPassengerCar(ostream &ofst);
	void Multimethod(ostream &outFile);
	void Clear();  // очистка контейнера от фигур
	void Sort(int d);
};
#endif