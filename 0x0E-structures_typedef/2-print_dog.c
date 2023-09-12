#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_dog - structure
  * @d: pointer to a structure variable
  */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)");
		} else
		{
			printf("Name: %s\n", d->name);
		}
		if (d->age < 0)
		{
			printf("Age: (nil)");
		} else
		{
			printf("Age: %f\n", d->age);
		}
		if (d->owner == NULL)
		{
			printf("Owner: (nil)");
		} else
		{
			printf("Owner: %s", d->owner);
		}
	}
	return;
}
