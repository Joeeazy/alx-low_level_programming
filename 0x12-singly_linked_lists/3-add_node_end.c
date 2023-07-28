#include <string.h>
#include "lists.h"
/**
  *add_node_end -  a function that adds a new node at the end of a list_t lis
  *@head: the pointer to the first node
  *@str:string to the list
  *Return:  address of the new element, or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *my_node;
	list_t *my_str = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	my_node = malloc(sizeof(list_t));
	if (!my_node)
	{
		return (NULL);
	}


	my_node->str = strdup(str);
	my_node->len = len;
	my_node->next = NULL;

	if (*head == NULL)
	{
		*head = my_node;
		return (my_node);
	}

	while (my_str->next)
		my_str = my_str->next;

	my_str->next = my_node;

	return (my_node);
}
