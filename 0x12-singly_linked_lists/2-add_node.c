#include "lists.h"
#include <string.h>
/**
  *add_node - function that adds a new node at the beginning of a list_t list.
  *@head: pointer to pointer of the first node
  *@str:pointer to the string
  *Return:the address of the new element, or NULL if it failed
  */


list_t *add_node(list_t **head, const char *str)
{
	list_t *i;
	unsigned int len = 0;

	while (str[len])
		len++;

	i = malloc(sizeof(list_t));
	if (!i)
		return (NULL);

	i->str = strdup(str);
	i->len = len;
	i->next = (*head);
	(*head) = i;

	return (*head);
}
