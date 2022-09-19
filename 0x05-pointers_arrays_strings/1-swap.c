#include "main.h"

/**
 * swap_int - to swap contents of two address
 *
 * @a: first integer reference parameter
 * @b: second integer reference parameter
 * Return - does not return anything
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
