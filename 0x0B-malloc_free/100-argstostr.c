#include "main.h"
#include <stdlib.h>
/**
  *argstostr- function that concatenates all the arguments
  *@ac: integer input
  *@av: double pointer
  *Return: void
  */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int k = 0;
	int m = 0;
	char *arg;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			m++;
	}
	m += ac;

	arg = malloc(sizeof(char) * m + 1);
	if (arg == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			arg[k] = av[i][j];
			k++;
		}
		if (arg[k] == '\0')
		{
			arg[k++] = '\n';
		}
	}
	return (arg);
}
