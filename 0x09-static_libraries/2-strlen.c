#include "main.h"

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
