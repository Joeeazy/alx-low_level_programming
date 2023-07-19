#include <stdio.h>
#include <stdlib.h>

/**
  *main- the ain function
  *@argc: arguments count
  *@argv: vector of arguments 
  *Return: 0 Success
  */

int main(int argc, char *argv[])
{
	int bytesNumber, j;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytesNumber = atoi(argv[j]);

	if (bytesNumber < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (j = 0; j < bytesNumber; j++)
	{
		if (j == bytesNumber - 1)
		{
			printf("%02hhx\n", array[j]);
			break;
		}
		printf("%02hhx ", array[j]);
	}
	return (0);
}
