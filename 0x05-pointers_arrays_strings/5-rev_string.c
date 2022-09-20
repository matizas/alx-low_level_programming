#include "main.h"
int _strlen(char *s);
void _puts(char *str);

/**
 * rev_string - reversing a string
 *
 * @s: reference parameter to store a string
 * Return: does not return a value
 */

void rev_string(char *s)
{
	/*_puts(s);*/

	print_rev(s);
}

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

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
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

/**
 * _puts - print to stdio a string
 *
 * @str: reference parameter to recieve a string.
 * Return: does not return a value
 */

void _puts(char *str)
{
	int i, flag;

	i = 0;
	flag = 0;

	while (!flag)
	{
		if (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
		else
			flag = 1;
	}
	_putchar('\n');
}
