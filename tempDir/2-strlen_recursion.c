#include "main.h"

/**
 * _strlen_recursion - determining length of a string
 *
 * @s: ref parameter to store the address of a string
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
