#include "main.h"

/**
 * _print_rev_recursion - rervering contents of a string
 *
 * @s: ref parameter to store the address of a string variable
 * Return: it does not return anyhing
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
