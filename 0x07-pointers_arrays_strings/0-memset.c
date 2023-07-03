#include "main.h"
/**
  *_memset - function that fills memory with a constant byte.
  *@s: pointer to int
  *@b: constant being changed to
  *@n: The value being changed
  *Return:  pointer to the memory area
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

