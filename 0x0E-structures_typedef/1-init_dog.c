#include "main.h"
#include "dog.h"

/**
 * init_dog - to initialise the fields of the object dog
 * @d: pointer to the struct
 * @name: to store the name of the dog
 * @age: to receive the age of the dog
 * @owner: to store the owner's name
 * Return: does not return anything
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
