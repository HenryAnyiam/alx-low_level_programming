#include <stdlib.h>
#include "dog.h"

/**
  *_strlen - counts length of string
  *@str: string
  *)
  *Return: length
  */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
  *_strcpy - copies a string
  *@a: string to copy from
  *@b: string to copy to
  *)
  *Return: copied string
  */
char * _strcpy(char *a, char *b)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
		b[i] = a[i];
	b[i] = '\0';
	return (b);
}

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
		return (NULL);
	new->name = malloc(sizeof(char) * (_strlen(name) + 1));
	new->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	if (new->owner == NULL)
	{
		free(new);
		return (NULL);
	}
	new->name = _strcpy(name, new->name);
	new->age = age;
	new->owner = _strcpy(owner, new->owner);
	return (new);
}
