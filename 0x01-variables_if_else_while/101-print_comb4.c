#include <stdio.h>
/**
  *main - different combinations of three digits.
  *Return: 0
  */
int main(void)
{
	int m, j, k;

	for (m = '0'; m <= 7; m++)
	{
		for (j = m + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar(m);
				putchar(j);
				putchar(k);

				if (m !=  '7' || j != '8' || k != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
