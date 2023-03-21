#include <stdlib.h>
#include "dog.h"

/**
  *new_dog - creates a new dog
  *@name: Name
  *@age: Age
  *@owner: Owner
  *)
  *Return: pointer or NULL
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (new);
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
