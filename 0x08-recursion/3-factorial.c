#include "main.h"

/**
 * factorial - to calculate factorial of a number recursively
 *
 * @n: value parameter
 * Return: factorial of a number
 */


int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
