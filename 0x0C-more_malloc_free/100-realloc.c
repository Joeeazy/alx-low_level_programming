#include <stdlib.h>
#include "main.h"
/**
  **_realloc - function that reallocates a memory block
  *@ptr: pointer to memory
  *@old_size:size of old memory
  *@new_size: size of the new memory after reallocation
  *Return: pointer to realloacted memory
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr;
	unsigned int j;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	newptr = malloc(new_size);

	if (newptr == NULL)
		return (NULL);

	for (j = 0; j < old_size && j < new_size; j++)
		newptr[j] = ((char *)ptr)[j];
	free(ptr);
	return ((void *)newptr);
}
