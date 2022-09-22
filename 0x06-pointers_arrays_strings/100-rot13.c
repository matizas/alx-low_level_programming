#include "main.h"

/**
* *rot13 - Caesar cipher
* @s: ref parameter
*Return: address
*/

char *rot13(char *s)
{
	char batch1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char batch2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	i = 0;
	while (s[i] != '0')
	{
		j = 0;
		while (batch1[j] != '\0')
		{
			if (s[i] == batch1[j])
			{
				s[i] = batch2[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
