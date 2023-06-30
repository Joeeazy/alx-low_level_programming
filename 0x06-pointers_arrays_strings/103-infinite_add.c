#include "main.h"

/**
  *infinite_add - function that adds two numbers
  *@n1: The first Number
  *@n2: seconde number
  *@r: buffer storing the result
  *@size_r: The size of the buffer
  *Return: r or 0
  */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int digit1, digit2, maxlen, i;
	char dig1, dig2, carry, rem, temp;

	for (digit1 = 0; *(n1 + digit1) != '\0'; digit1++)
		carry = 0;
	for (digit2 = 0; *(n2 + digit2) != '\0'; digit2++)
		rem = 0;
	maxlen = digit1 > digit2 ? digit1 : digit2;
	i = maxlen;
	if (size_r < maxlen + 1)
		return (0);
	*(r + maxlen) = '\0';
	i--;
	digit1--;
	digit2--;

	for (; i >= 0; i--)
	{
		dig1 = digit1 >= 0 ? *(n1 + digit1) - '0' : 0;
		dig2 = digit2 >= 0 ? *(n2 + digit2) - '0' : 0;
		rem = (dig1 + dig2 + carry) % 10;
		carry = (dig1 + dig2 + carry) / 10;
		*(r + i) = (rem + '0');
		digit1--;
		digit2--;
	}
	if (carry > 0 && size_r >= maxlen + 2)
	{
		for (i = maxlen + 1; i > 0; i--)
		{
			temp = *(r + i);
			*(r + i) = *(r + i - 1);
			*(r + i - 1) = temp;
		}
		*(r + i) = carry + '0';
		return (r);
	}
	return ((carry > 0 && size_r < maxlen + 2) ? 0 : r);
}
