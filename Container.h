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
	void Out(ofstream &ofst);  // вывод фигур
	void OutOnlyBus(ofstream &ofst);
	void OutOnlyTruck(ofstream &ofst);
	void OutOnlyPassengerCar(ofstream &ofst);
	void Clear();  // очистка контейнера от фигур
	void Sort();
};
#endif