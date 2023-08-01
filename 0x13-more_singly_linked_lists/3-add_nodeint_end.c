#include "lists.h"

/**
 *add_nodeint_end - function that adds a new node at the end of a list
 *@head:pointer to the first node in a linked list
 *@n: arguments in the fuction
 *Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i;
	listint_t *temp = *head;

	i = malloc(sizeof(listint_t));
	if (!i)
		return (NULL);

	i->n = n;
	i->next = NULL;

	if (*head == NULL)
	{
		*head = i;
		return (i);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = i;
	return (i);
}
