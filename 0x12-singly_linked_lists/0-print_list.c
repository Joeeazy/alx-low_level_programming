#include "lists.h"
/**
 *print_list - prints elements in linked list
 *@h: pointer to print list
 *Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int s;

	s = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
