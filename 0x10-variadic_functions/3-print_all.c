#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_all - function that prints anything
 *@format: arguments passed to the function
 *Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;

	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				break;
		}

		if (format[i + 1])
			printf(", ");
		i++;
	}

	printf("\n");
	va_end(args);
}
