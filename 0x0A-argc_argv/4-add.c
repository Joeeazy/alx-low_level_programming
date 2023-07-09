#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  *main - a program that adds positive numbers.
  *@argc: argument count
  *@argv: argument vector
  *Return: 0 or 1
  */

int main(int argc, char *argv[])
{
	int j = 1, i, result = 0;

	while (j < argc)
	{
		char *arg = argv[j];

		for (i = 0; arg[i] != '\0'; i++)
		{
			if (!isdigit(arg[i]))
			{
				printf("Error\n");
				return (0);
			}
		}
		result += atoi(argv[j]);
		j++;
	}
	printf("%d\n", result);
	return (0);
}

