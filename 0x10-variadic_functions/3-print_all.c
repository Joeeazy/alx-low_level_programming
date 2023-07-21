#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_char - Prints a char
* @args: The va_list
*/
void print_char(va_list args)
{
char c = va_arg(args, int);
printf("%c", c);
}

/**
* print_int - Prints an int
* @args: The va_list
*/
void print_int(va_list args)
{
int num = va_arg(args, int);
printf("%d", num);
}

/**
* print_float - Prints a float.
* @args: The va_list that contains the float
*/
void print_float(va_list args)
{
double num = va_arg(args, double);
printf("%f", num);
}

/**
* print_string - Prints a string.
* @args: The va_lis
*/
void print_string(va_list args)
{
char *str = va_arg(args, char*);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
}

/**
* print_all -  Function that prints anything.
* @format: List of types of arguments
*/
void print_all(const char * const format, ...)
{
int i = 0;
va_list args;
char *s = "";
char *str;

va_start(args, format);

if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", s, va_arg(args, int));
break;
case 'i':
printf("%s%d", s, va_arg(args, int));
break;
case 'f':
printf("%s%f", s, va_arg(args, double));
break;
case 's':
s = ", ";
str = va_arg(args, char*);
if (str == NULL)
printf("(nil)");
else
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

