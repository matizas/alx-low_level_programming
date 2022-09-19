#include "main.h"

/**
 * _puts2 - print to stdio a string
 *
 * @str: reference parameter to recieve a string.
 * Return: does not return a value
 */

void _puts2(char *str)
{
	int i, flag;

	i = 0;
	flag = 0;

	while (!flag)
	{
		if (str[i] != '\0')
		{
			_putchar(str[i]);
			i+=2;
		}
		else
			flag = 1;
	}
	_putchar('\n');
}
