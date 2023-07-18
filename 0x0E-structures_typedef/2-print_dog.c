#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
  *print_dog - prints the dog's struct
  *@d: struct dog being printed
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(NIL)";
	if (d->owner == NULL)
		d->owner = "(NIL)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
