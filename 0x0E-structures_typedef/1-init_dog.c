#include "dog.h"
#include <stdlib.h>

/**
  * init_dog - initialize a variable of type dog
  * @d: variable name
  * @name: 1st struct element
  * @age: 2nd struct element
  * @owner: 3rd struct element
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
