#include "main.h"
/**
  *_strlen- Returns the value of the string
  *@s: string to be returned
  *Return: length of string
  */
int _strlen(char *s)
{
	int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);
}

