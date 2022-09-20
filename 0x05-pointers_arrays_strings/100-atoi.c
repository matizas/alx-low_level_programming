#include "main.h"

/**
 * _atoi - convert from string to integer;
 *
 * @s: ref parameter to recieve a string
 * Return: an integer value is returned
 */

int _atoi(char *s)
{
	int neg, i;
       unsigned int num;

	neg = 1;
	i = 0;
	num = 0;

	while (!(s[i] >= '0' && s[i] <= '9') && s[i] != '\0')
	{
		if (s[i] == '-')
		{
			neg = neg * -1;
		}

		i++;
	}

	while ((s[i] >= '0' && s[i] <= '9') && s[i] != '\0')
	{
		num = (num * 10) + (s[i] - '0');
		i++;
	}

	num = num * neg;
	return (num);
}

