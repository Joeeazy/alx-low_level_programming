#include "main.h"

/**
 * binary_to_uint - converts a binary to int
 * @s: pointer chars argument
 * Return: number or 0
 *
 */

unsigned int binary_to_uint(const char *s)
{
	unsigned int result = 0, i = 0;

	if (!s)
		return (0);
	for (i = 0; s[i]; i++)
	{
		if (s[i] < '0' || s[i] > '1')
			return (0);
		result = result << 1;
		result |= (s[i] - '0');
	}
	return (result);
}
