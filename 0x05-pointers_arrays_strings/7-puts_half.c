#include "main.h"
/**
  *puts_half - prints half of the string
  *@str: the string being printed
  *Return: 0
  */
void puts_half(char *str)
{
	int length = 0, mid;

	while (str[length] != '\0')
		length++;
	if (length % 2 != 0)
		mid = (length / 2) + 1;
	else
		mid = length / 2;
	for (mid = mid; mid < length; mid++)
		_putchar(str[mid]);
	_putchar('\n');
}
