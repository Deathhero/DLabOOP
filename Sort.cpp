#include "Container.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void container::Sort(int d)
{
	container *p = this;
	bool flag;
	do
	{
		flag = false;
		for (int i = 0; i < len - 1; i++)
		{
			p = p->prev;
		}
		while (p->next != NULL)
		{
			car *one;
			one = p->cont;
			p = p->next;
			car *two;
			two = p->cont;
			bool k;
			switch (d)
			{
			case 0:
				k = one->Compare(two);
				break;
			case 1:
				k = !one->Compare(two);
				break;
			default:
				cerr << "Inknown d in sort function!" << endl;
				exit(1);
			}
			if (k == true)
			{
				p->cont = one;
				p = p->prev;
				p->cont = two;
				flag = true;
			}
			else
			{
				p = p->prev;
			}
			p = p->next;
		}
	} while (flag);
}