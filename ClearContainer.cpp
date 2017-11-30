#include "Container.h"

void container::Clear()
{
	container *cur = this;
	cur = cur->next;
	while (cur != NULL)
	{
		container *temp = cur->prev;
		temp->next = cur->next;
		delete cur;
		cur = temp;
	}
	len = 0;
	cont = NULL;
	next = NULL;
	prev = NULL;
}