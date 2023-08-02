#include "lists.h"

/**
 * free_listint_safe - function that frees a list and sets the head to NULL
 * @h: pointer to the first node in the list
 * Return: size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	int i;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		i = *h - (*h)->next;
		if (i > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			size++;
		}
		else
		{
			free(*h);
			*h = NULL;
			size++;
			break;
		}
	}
	*h = NULL;
	return (size);
}

