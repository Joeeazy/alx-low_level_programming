#include <string.h>
#include "main.h"
/**
  *is_palindrome- function returns palindrome
  *@s: string being checked
  *Return: 1 or 0
  */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (!*s)
		return (0);
	return (pString(s, 0, len - 1));
}
/**
  *pString - confirma palindrome string
  *@s: the string being checked
  *@i: the beiginning of the string
  *@j: the end of the string
  *Return: 1 or 0
  */
int pString(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	else if (s[i] != s[j])
		return (0);
	return (pString(s, i + 1, j - 1));
}
