#include "function_pointers.h"

/**
 * int_index - searching for an integer
 * @array: store the address of an array
 * @size: size of the array
 * @cmp: pointer to function to compare values
 * Return: 0 or an index or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array && cmp)
	{
		for (i = 1; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
