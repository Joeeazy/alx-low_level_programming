#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all -  function that prints anything.
 * @format: list of types of arguments passed to the function
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
    int i = 0;
    char *str = "";
    va_list args;

    va_start(args, format);

    if (format)
    {
        while (format[i])
        {
            if (i != 0)
                printf(", "); 

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
            i++;
        }
    }
    printf("\n");
    va_end(args);
}

