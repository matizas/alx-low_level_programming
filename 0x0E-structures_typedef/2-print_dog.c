#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - display the details of the dog
 * @d: pointer to the struct
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf(" ");
	else if (d->name == NULL)
		printf("Name:(nil)");
	else if (d->age == 0.0)
		printf("Age:(nil)");
	else if (d->owner == NULL)
		printf("Owner:(nil)");
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
