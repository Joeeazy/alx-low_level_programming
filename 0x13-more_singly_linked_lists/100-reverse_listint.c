#include "lists.h"
/**
 * reverse_listint -  function that reverses a list
 * @head: pointer to the first node in the linked list
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *i = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = i;
		i = *head;
		*head = next;
	}
	*head = i;
	return (*head);
}
