#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - to print the sum of all arguments
 * @n: the first argument in a variable function
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list argz;

	if (!n)
		return (0);

	va_start(argz, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(argz, int);

	va_end(argz);

	return (sum);
}
