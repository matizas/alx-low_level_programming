#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - function with single argument
 * @d: stores pointer for dog struct
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
