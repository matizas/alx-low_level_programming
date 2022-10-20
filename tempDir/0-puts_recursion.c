#include "main.h"

/**
 * _puts_recursion - recursively print characters in a string
 *
 * @s: ref parameter to store the address of the string
 * Return: does not return anything
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);

	}
	else
		_putchar('\n');
}
