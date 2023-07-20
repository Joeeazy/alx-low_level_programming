#include <stdio.h>
#include <stdarg.h>

/**
  *sum_them_all - function prototype
  *@n: intergers being taken by the program
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start (args, n);

	unsigned int i;
	int sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
