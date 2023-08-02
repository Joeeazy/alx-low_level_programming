#include "lists.h"
/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: Pointer to the first node in th linked list
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slw, *fst;
	size_t nodes = 0;

	if (head == NULL)
		return (0);
	slw = head;
	fst = head->next;

	while (fst != NULL && fst < slw)
	{
		nodes += 1;
		printf("[%p] %i\n", (void *)slw, slw->n);
		slw = slw->next;
		fst = fst->next;
	}
	printf("[%p] %i\n", (void *)slw, slw->n);
	nodes += 1;

	if (fst)
		printf("-> [%p] %i\n", (void *)fst, fst->n);
	return (nodes);
}

