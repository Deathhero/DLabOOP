#include "Car.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

bool car::Compare(car *next)
{
	return (Func() > next->Func());
}