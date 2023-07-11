#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  *str_concat- function that concatenates two strings.
  *@s1: string one
  *@s2: string two
  *Return: s1 + s2 or NULL
  */
char *str_concat(char *s1, char *s2)
{
	char *newstr;
	int i;
	int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	newstr = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (newstr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		newstr[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		newstr[i + j] = s2[j];
	newstr[i + j] = s2[j];
	newstr[i + j] = '\0';
	return (newstr);
}
