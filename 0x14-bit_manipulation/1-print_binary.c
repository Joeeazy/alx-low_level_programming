#include "main.h"
#include <stdio.h>
/**
  * print_binary - function that prints the binary representation of a number.
  * @n: arguments in the function
  * Returb :Nothing
*/
void print_binary(unsigned long int n)
{
	int i, j = 0;
	unsigned long int var;

	for (i = 63; i >= 0; i--)
	{
		var = n >> i;

		if (var & 1)
		{
			putchar('1');
			j++;
		}
		else if (j)
			putchar('0');
	}
	if (!j)
		putchar('0');
}
