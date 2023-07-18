#include "dog.h"
#include <stdlib.h>
/**
  *free _dog - function to free memory allocated
  *@d: pointer to the t the dog's structure
  *Return: 0 success
  */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
