#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocating memory from an old pointer to a new pointer
 * @ptr: address to the old memory block
 * @old_size: amount of bytes allocated to the old pointer
 * @new_size: amount of bytes to the new pointer
 * Return: ptr to the new allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *newblock;

	if (new_size > old_size)
	{
		newblock = malloc(new_size);
		free(ptr);
		return (newblock);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		newblock = malloc(new_size);
		free(ptr);
		return (newblock);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	return (ptr);
}
