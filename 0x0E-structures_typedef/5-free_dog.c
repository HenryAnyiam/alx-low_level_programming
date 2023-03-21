#include <stdlib.h>
#include "dog.h"

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}
