#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main- program to generate random valid passwords
  *Return: Always 0
  */
int main(void)
{
	int pwd[100];
	int i, j, n;

	j = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pwd[i] = rand() % 78;
		j += (pwd[i] + '0');
		putchar(pwd[i] + '0');
		if ((2722 - j) - '0' < 78)
		{
			n = 2772 - j - '0';
			j += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
