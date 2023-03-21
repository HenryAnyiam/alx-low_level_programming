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

/**
  *dog_t - Typedef for struct dog
  */
typedef struct dog dog_t

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
