#include <stdio.h>
#include "main.h"

/**
 * print_array - to print data items in the array
 *
 * @a: reference parameter to the array
 * @n: value parameter
 * Return: does not return a value
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
