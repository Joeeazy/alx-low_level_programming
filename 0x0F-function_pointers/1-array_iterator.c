#include <stddef.h>
#include "function_pointers.h"

/**
  *array_iterator -  function given as a parameter on each element of an array.
  *@array: pointer toan array of intergers
  *@size:the size of the array
  *@action:pointer to print
  *Return: nothing
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		return;

	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
