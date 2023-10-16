#include "main.h"

/**
  * _strcpy - copy string at source to its destination
  * @dest: destination of file
  * @src: source of the file
  *Return: Dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
