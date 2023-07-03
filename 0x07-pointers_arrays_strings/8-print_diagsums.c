#include <stdio.h>
#include "main.h"
/**
  * print_diagsums - sum of the two diagonals of a square matrix
  *@a: pointer to an array
  *@size: size of array
  */
void print_diagsums(int *a, int size)
{
	int i;
	int j = 0;
	int k = 0;

	for (i = 0; i < size; i++)
	{
		j += a[i * size + i];
		k += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", j, k);
}


