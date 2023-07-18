#include <stdlib.h>
#include "dog.h"
/**
  *new_dog - pointer to the struct function
  *@name: the dog's name
  *@age: the dog's age
  *@owner: owner to dog
  *Return: A poinetr to new dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_len = 0, owner_len = 0, j;

	while (name[name_len] != '\0')
		name_len++;
	while (owner[owner_len] != '\0')
		owner_len++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc((name_len + 1) * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc((name_len + 1) * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (j = 0; j <= name_len; j++)
		new_dog->name[j] = name[j];
	for (j = 0; j <= owner_len; j++)
		new_dog->owner[j] = owner[j];

	new_dog->age = age;

	return (new_dog);
}
