#include "main.h"

/**
 * reverse_array - reverses contents of the array
 *
 * @a: ref parameter
 * @n: value parameter
 * Return: does not return a value
 */

void reverse_array(int *a, int n)
{
	int b, j;

	j = -1;
	while (n > j)
	{
		b = a[j];
		a[j] = a[n];
		a[n] = b;
		j++;
		n--;
	}
}
