#include "main.h"
#include <stdlib.h>
/**
  *create_array- function that creates an array of chars
  *@size: size of array of chars
  *@c:specfici char being initialized
  *Return: NULL if size = 0||pointer to the array
  */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int j;

	array = malloc(sizeof(char) * size);
	if (size == 0 || array == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		array[j] = c;
	return (array);
}
