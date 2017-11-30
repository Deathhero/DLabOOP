#include "Container.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void container::Multimethod(ofstream &outFile)
{
	container *temp1 = this;
	for (int i = 0; i < len - 1; i++)
		temp1 = temp1->prev;
	while ((temp1 != NULL) && (len != 0))
	{
		container *temp2 = this;
		for (int i = 0; i < len - 1; i++)
			temp2 = temp2->prev;
		while (temp2 != NULL)
		{
			temp1->cont->Multimethod(temp2->cont, outFile);
			temp1->cont->Out(outFile);
			temp2->cont->Out(outFile);
			temp2 = temp2->next;
			outFile << endl;
		}
		temp1 = temp1->next;
	}
}