#include "main.h"

/**
 * _strcmp - compare two strings
 *
 * @s1: first ref parameter
 * @s2: second ref parameter
 * Return: pos, neg or zero
 */

int _strcmp(char *s1, char *s2)
{
	int r_value, i;

	r_value = 0;
	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
				r_value = s1[i] - s2[i];
			else
				r_value = s1[i] - s2[i];
			break;
		}
		i++;
	}

	return (r_value);
}
