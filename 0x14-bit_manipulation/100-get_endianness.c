#include <stdio.h>
#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int var = 2;

	if (var & 1)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
