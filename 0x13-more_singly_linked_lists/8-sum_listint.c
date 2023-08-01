#include "lists.h"
/**
 * sum_listint -  function that returns the sum of all the data (n) of a list
 * @head: pointer to thev first node in the linked list
 * Return: the sum if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
