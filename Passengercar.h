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
	// переопределяем интерфейс класса
	void InData(ifstream &ifst);  // ввод 
	void Out(ofstream &ofst);     // вывод 
	passengercar() {} // создание без инициализации.
};
#endif