#include "lists.h"
/**
  * pop_listint - function that deletes the head node of a list
  * @head: pointer to the first node of the linked list
  * Return: head node’s data (n). and if the linked list is empty return 0
  */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (!head || !*head)
		return (0);

	i = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (i);
}
