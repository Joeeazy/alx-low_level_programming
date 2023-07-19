#include <stddef.h>
#include <stdio.h>
/**
  *int_index - function that searches for an integer.
  *@array: pointer to an array
  *@size: size of the array
  *@cmp: compares strings
  *Return: int index
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int arr;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (arr = 0; arr < size; arr++)
	{
		if (cmp(array[arr]))
			return (arr);
	}
	return (-1);
}

