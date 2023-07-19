#include <stdio.h>
#include <stdlib.h>

/**
  *main- the ain function
  *@argc: arguments count
  *@argv: arguments vectors
  *Return: 0 Success
  */

int main(int argc, char **argv)
{
	int bytesNumber, j;
	char *array = (char *)main;

	if (argc < 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytesNumber = atoi(argv[1]);

	if (bytesNumber < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (j = 0; j < bytesNumber - 1; j++)
		printf("%02hhx ", array[j]);
	printf("%02hhx\n", array[j]);

	return (0);
}
