#include "lists.h"

/**
  *add_nodeint - function that adds a new node at the beginning of a list
 * @head: pointer to pointer to the first node in the list
 * @n: arguments to the function
 * Return:  the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *num;

	num = malloc(sizeof(listint_t));
	if (!num)
		return (NULL);

	num->n = n;
	num->next = *head;
	*head = num;
	return (num);
}
