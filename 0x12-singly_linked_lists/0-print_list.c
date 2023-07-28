#include "lists.h"
/**
  *print-list - prints elements in linked list
  *@h: pointer to print list
  *Return: the number of nodes
  */

size_t print_list(const list_t *h)
{
	size_t i;
	
	i = 0;
	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}

