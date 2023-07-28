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
	char *my_str;
	unsigned int j;

	my_node = malloc(sizeof(list_t));
	if (my_node == NULL)
	{
		return (NULL);
	}

	my_str = strdup(str);

	for (j = 0; str[j] != '\0'; j++)
		continue;

	my_node->str = my_str;
	my_node->len = j;

	my_node->next = *head;
	*head = my_node;

	return (my_node);
}
