#include "function_pointers.h"

/**
 * array_iterator - to print elements of an array
 * @array: get the address of the array
 * @size: to store the size of an array
 * @action: pointer to function to print the elements of the array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (array[i] >= 0)
			action(array[i]);
	}
}
