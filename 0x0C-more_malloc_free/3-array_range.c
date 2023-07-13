#include <stdlib.h>
#include "main.h"
/**
  *array_range -  function that creates an array of integers.
  *@min: the minimum number
  *@max: the maximu number
  *Return: the pointer to the newly created array || NULL
  */
int *array_range(int min, int max)
{
	int *num;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	num = (int *)malloc(size * sizeof(int));

	if (num == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		num[i] = min++;
	return (num);
}

