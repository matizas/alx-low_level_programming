#include "main.h"
/**
 * print_rev - reversing a string
 *
 * @s: reference parameter to store a string
 * Return: does not return a value
 */

void print_rev(char *s)
{
	int i;

	i = _strlen(s) - 1;

	while (i > 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
