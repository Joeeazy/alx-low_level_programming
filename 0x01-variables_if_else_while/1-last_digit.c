#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - modulus of 10 greater or less than 5
  *Return: 0
  */
int main(void)
{
	int n;

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n
				% 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
				n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	return (0);
}
