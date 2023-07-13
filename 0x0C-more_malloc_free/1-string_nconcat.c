#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
  **string_nconcat - pointer to function that concatenates two strings
  *@s1: first string
  *@s2: second string
  *@n: number of memory being allocated
  *Return:  concatenated string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cont_str;
	unsigned int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	cont_str = malloc(sizeof(char) * (len1 + n + 1));

	if (cont_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		cont_str[i] = s1[i];
	for (j = 0; j < n; j++)
		cont_str[i + j] = s2[j];
	cont_str[i + j] = '\0';

	return (cont_str);
}
