#include "main.h"
#include <stdio.h>
/**
  * rot13 - encodes string in rot13
  * @str: string being encoded
  * Return: encoded strign
  */
char *rot13(char *str)
{
	int i, j;
	char norm[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encode[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == norm[j])
			{
				str[i] = encode[j];
				break;
			}
		}
	}
	return (str);
}
