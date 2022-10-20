#include "main.h"
int _strlen(char *s);

/**
 * puts_half - print last half of the string
 *
 * @str: reference parameter to store a string
 * Return: does not return a value
 */

void puts_half(char *str)
{
	int l, i;

	l = _strlen(str) - 1;

	i = (l / 2) + 1;

	while (i <= l)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * _strlen - to count number of characters
 *
 * @s: reference parameter to recieve a string
 * Return: an integer, the Length or the number of characters.
 */

int _strlen(char *s)
{
	int i, flag;

	i = 0;
	flag = 0;

	while (!flag)
	{
		if (s[i] != '\0')
		{
			i++;
		}
		else
			flag = 1;
	}

	return (i);
}
