#include <stdio.h>
#include <string.h>
/**
  *_strncpy - function that copies a string.
  *@src: source of string
  *@dest: destination of string
  *@n: input value
  *Return: Returns dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
