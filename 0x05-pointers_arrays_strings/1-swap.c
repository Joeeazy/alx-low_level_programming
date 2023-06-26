#include "main.h"

/**
  *swap_int(int *a, int *b)- swaps values of two integers
  *@a: swaps address to b
  *@b: swaps and stores address to a
  */
void swap_int(int *a, int *b)
{
	int swp;

	swp = *b;
	*b = *a;
	*a = swp;
}
