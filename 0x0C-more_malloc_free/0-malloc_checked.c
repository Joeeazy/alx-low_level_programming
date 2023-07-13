#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  **malloc_checked - function containing mallloc()
  *@b: int beng allocated memore
  *Return: pointer to the allocated memory
  */
void *malloc_checked(unsigned int b)
{
	void *ptrb = malloc(b);

	if (ptrb == NULL)
		exit(98);
	return (ptrb);
}
