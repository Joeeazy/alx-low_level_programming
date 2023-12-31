#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  **_calloc - function that allocates memory for an array
  *@nmemb: number of elements in the array
  *@size: size of the array
  *Return: pointer to array
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;
	return ((void *)ptr);
}


