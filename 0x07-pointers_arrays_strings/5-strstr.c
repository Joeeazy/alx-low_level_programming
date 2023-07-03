#include <stdio.h>
#include "main.h"
/**
  *_strstr - function that locates a substring.
  *@haystack: pointer  to a string
  *@needle: pointer to string
  *Return: pointer to the beginning of the located substring
  */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *i = haystack;
		char *j = needle;

		while (*j != '\0' && *i == *j)
		{
			i++;
			j++;
		}
		if (*j == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
