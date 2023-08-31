#include "main.h"

/**
  * flip_bits - counts the number of bits to change
  * @n: first argument
  * @m: second argument
  * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, nm_bits = 0;
	unsigned long int j;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		j = exclusive >> i;
		if (j & 1)
			nm_bits++;
	}
	return (nm_bits);
}
