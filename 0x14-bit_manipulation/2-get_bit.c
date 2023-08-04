#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: arguments of the function
 * @index: index of the bit
 * Return:  the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 63)
		return (-1);
	i = (n >> index) & 1;
	return (i);
}
