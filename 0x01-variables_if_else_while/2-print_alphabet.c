#include <stdio.h>
/**
  *main - function that prints alphabets in lowercase
  *Return: 0
  */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
