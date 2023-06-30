#include <stdio.h>

/**
  * print_buffer - prints a buffer
  * @b: the buffer
  * @size: size
  */
void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", b[i + j]);
			else
				printf(" ");
			if (j % 2 != 0)
				putchar(' ');
		}
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				putchar(b[i + j] < ' ' ? '.' : b[i + j]);
		}
		putchar('\n');
	}
	if (size <= 0)
		putchar('\n');
}
