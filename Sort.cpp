#include "Container.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void container::Sort()
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
			bool k = one->Compare(two);
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