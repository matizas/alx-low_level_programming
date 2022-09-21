#include "main.h"
int _strlen(char *s);
/**
 * rev_string - reversing a string
 *
 * @s: reference parameter to store a string
 * Return: does not return a value
 */

void rev_string(char *s)
{
	int i, j;
	char tmp;

	i = _strlen(s) - 1;
	j = 0;

	while (i >= j)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		i--;
		j++;
	}
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
