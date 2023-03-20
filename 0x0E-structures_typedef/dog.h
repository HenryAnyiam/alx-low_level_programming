#ifndef _dog_
#define _dog_

/**
  *struct dog - new structure type
  *@name: first member
  *@age: second member
  *@owner: third member
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
