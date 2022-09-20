#include "main.h"
int _5strlen(char *s);
void _5puts(char *str);
void print_5rev(char *s);

/**
 * rev_string - reversing a string
 *
 * @s: reference parameter to store a string
 * Return: does not return a value
 *

void rev_string(char *s)
{
	_5puts(s);

	print_5rev(s);
}*/

/**
 * print_5rev - reversing a string
 *
 * @s: reference parameter to store a string
 * Return: does not return a value
 */

void print_5rev(char *s)
{
	int i;

	i = _5strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

/**
 * _5strlen - to count number of characters
 *
 * @s: reference parameter to recieve a string
 * Return: an integer, the Length or the number of characters.
 */

int _5strlen(char *s)
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
 * _5puts - print to stdio a string
 *
 * @str: reference parameter to recieve a string.
 * Return: does not return a value
 */

void _5puts(char *str)
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
