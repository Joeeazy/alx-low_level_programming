#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
  *print_all -  function that prints anything.
  *@format: list of types of arguments passed to the function
  *Return: Nothing
  */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *arr = "";
	char *str = "";
	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", str, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", str, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", str, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", str, arr);
					break;
				default:
					i++;
					continue;
			}
			str = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
