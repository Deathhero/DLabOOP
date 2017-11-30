#include "Container.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void CheckOutputFile(ostream &ofst);

void container::Out(ofstream &outFile)
{
	CheckOutputFile(outFile);
	outFile << "Container contains " << len << " elements." << endl;
	container *p = this;
	for (int i = 0; i < len - 1; i++)
		p = p->prev;
	int k = 1;
	while ((p != NULL) && (len != 0))
	{
		outFile << k << ": ";
		p->cont->Out(outFile);
		outFile << "Cargo weight / Engine power = " << p->cont->Func() << endl;
		p = p->next;
		k++;
	}
}