#include <stdio.h>
#include "main.h"

/**
 * flip_bits - Returns the number of bits
 * @n: The first argument of the function.
 * @m: The other argument of the function
 * Return: returns the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int var = 0;

	while (x != 0)
	{
		x &= (x - 1);
		var++;
	}
	return (var);
}
