#include "main.h"
/**
  *_strncat - function that concatenates two strings.
  *@dest: the string destination
  *@src: the string source
  *@n: byte limit
  *Return: destination
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, index = 0;

	if (n <= 0)
		return (dest);

	while (dest[i] != '\0')
		i++;

	while (index < n && src[index] != '\0')
		dest[i++] = src[index++];

	dest[i++] = '\0';
	return (dest);
}
