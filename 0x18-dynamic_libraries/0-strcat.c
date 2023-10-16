#include "main.h"
/**
  *_strcat -  concatenates two strings.
  *@src: source string
  *@dest: Destination string
  *Return: Dest
  */

char *_strcat(char *dest, char *src)
{
	int i = 0, index;

	while (dest[i] != '\0')
		i++;
	for (index = 0; src[index] != '\0'; index++)
		dest[i + index] = src[index];
	return (dest);
}
