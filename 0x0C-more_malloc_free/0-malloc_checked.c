#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - to allocate memory for an integer value
 * @b: value parameter recieved from a calling program
 * Return: an address to the reserved memory to the calling program
 */

void *malloc_checked(unsigned int b)
{
	void *num;

	num = malloc(b);

	if (num == NULL)
		exit(98);
	return (num);
}
