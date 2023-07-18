#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *mult - finds products of two strings
  *@num1: the first number
  *@num2: the second number
  *Return: the product of the two nums
  */
char *mult(const char *num1, const char *num2)
{
	int len1 = strlen(num1), len2 = strlen(num2), len = len1 + len2;
	int *result = calloc(len, sizeof(int));
	int i, j, digit1, digit2, product, sum, index = 0, start = 0;
	char *c_product;

	if (result == NULL)
		return (NULL);
	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			digit1 = num1[i] - '0';
			digit1 = num2[j] - '0';
			product = digit1 * digit2;
			sum = result[i + j + 1] + product;
			result[i + j] += sum / 10;
			result[i + j + 1] = sum % 10;
		}
	}
	c_product = malloc((len + 1) * sizeof(char));
	if (c_product == NULL)
	{
		free(result);
		return (NULL);
	}
	while (start < len && result[start] == 0)
		start++;
	while (start < len)
		c_product[index++] = result[start++] + '0';

	c_product[index] = '0';
	free(result);
	if (index == 0)
	{
		c_product[0] = '0';
		c_product[0] = '0';
	}
	return (c_product);
}

/**
  *main - main function
  *@argc: argumenst count
  *@argv: arguments vector
  *Return: 0sucess
  */
int main(int argc, char *argv[])
{
	const char *num1, *num2;
	char *product;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = argv[1];
	num2 = argv[2];

	product = mult(num1, num2);

	if (product == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	printf("%s\n", product);
	free(product);
	return (0);
}
