#include "main.h"

/**
 * _strspn - determine the number of bytes matches another string
 *
 * @s: first ref parameter to hold an address
 * @accept: second ref to hold address of a searched string
 * Return: number of bytes matches a string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count, bfound, i, j;

	count = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		bfound = 0;
		for (j = 0; accept[j] != '\0'; ++j)
		{
			if (s[i] == accept[j])
			{
				bfound = 1;
				break;
			}
		}

		if (bfound == 0)
			return (count);
		++count;
	}
	return (count);
}
