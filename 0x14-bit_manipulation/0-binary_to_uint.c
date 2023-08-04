#include "main.h"
/**
  * binary_to_uint -  function that converts a binary number to an unsigned int
  *@b: arguments to the function
  *Return: the converted number, or 0
  */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int var = 0;

	if (!b)
	{
		return (0);
	}

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		var = 2 * var + (b[i] - '0');
	}
	return (var);
}
