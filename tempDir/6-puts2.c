#include "main.h"
int _strlen(char *s);

/**
 * puts2 - print to stdio a string
 *
 * @str: reference parameter to recieve a string.
 * Return: does not return a value
 */

void puts2(char *str)
{
	int i, l, flag;

	i = 0;
	flag = 0;

	l = _strlen(str);

	while (!flag && i < l)
	{
		if (str[i] != '\0')
		{
			_putchar(str[i]);
			i += 2;
		}
		else
			flag = 1;
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
