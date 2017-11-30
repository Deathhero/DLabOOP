#include "Container.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void CheckInputFile(ifstream &ifst);
void CheckWrongInput(ifstream &ifst);

void container::In(ifstream &ifst)
{
	CheckInputFile(ifst);
	if (ifst.eof()) {
		cerr << "Empty File!" << endl;
		exit(1);
	}

	ifst >> len;
	CheckWrongInput(ifst);
	if (len < 0)
	{
		cout << "Wrong count of elements ( must be >= 0)!!!" << endl;
		exit(1);
	}
	container *cur = this;
	for (int i = 0; i < len; i++)
	{
		car *c;
		if ((c = car::In(ifst)) != 0)
		{
			container *temp, *p;
			temp = new container;
			p = cur->next;
			cur->next = temp;
			temp->cont = c;
			temp->next = p;
			temp->prev = cur;
			if (p != NULL)
				p->prev = temp;
			cur = temp;
		}
	}
	this->cont = cur->cont;
	this->next = cur->next;
	this->prev = cur->prev;
}