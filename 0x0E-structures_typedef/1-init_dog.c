#include "dog.h"

/**
  * init_dog - initialize a variable of type dog
  * @d: variable name
  * @name: 1st struct element
  * @age: 2nd struct element
  * @owner: 3rd struct element
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog init_dog = *d;

	init_dog.name = name;
	init_dog.age = age;
	init_dog.owner = owner;
}
