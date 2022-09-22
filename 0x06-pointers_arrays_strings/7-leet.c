#include "main.h"

/**
 * *leet - to encrypt a string
 *
 * @s: ref parameter
 * Return: the address
 */

char *leet(char *s)
{
	int i, j;
	char letter[] = "aAeEoOtTlL";
	char digits[] = "4433007711";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (letter[j] != '\0')
		{
			if (s[i] == letter[j])
			{
				s[i] = digits[j];
				break;
			}
			j++;
		}
		i++;
	}
}
