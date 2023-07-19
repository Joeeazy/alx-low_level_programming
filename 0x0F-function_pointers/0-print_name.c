#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"
/**
  *print_name - 
  *@name: pointer to name address
  *@f: pointer to the function
  *Return: 0 success
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

