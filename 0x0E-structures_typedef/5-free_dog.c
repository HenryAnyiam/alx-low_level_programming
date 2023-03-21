#include <stdlib.h>
#include "dog.h"

/**
  *free_dog - free dog
  *@d: pointer to structure
  */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
