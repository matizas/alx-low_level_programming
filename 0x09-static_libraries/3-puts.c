#include "main.h"

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
