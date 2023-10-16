#include <stdio.h>
#include "main.h"
/**
  *_strpbrk - function that searches a string for any of a set of bytes.
  *@s: bytes in the string accept
  *@accept: string pointer
  *Return: pointer to the byte in s
  */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *i = accept;

		while (*i != '\0')
		{
			if (*s == *i)
			{
				return (s);
			}
			i++;
		}
		s++;
	}
	return (NULL);
}
