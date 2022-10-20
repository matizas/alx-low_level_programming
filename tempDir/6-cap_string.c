#include "main.h"
/**
 * *cap_string - capitalize words
 *
 * @s: ref parameter
 * Return: address
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		switch (s[i])
		{
			case 9:
			case 10:
			case 32:
			case 33:
			case 34:
			case 40:
			case 41:
			case 44:
			case 46:
			case 59:
			case 63:
			case 123:
			case 125:
				{
					if (s[i + 1] >= 97 && s[i + 1] <= 122)
					{
						s[i + 1] = s[i + 1] - 32;
					}
					break;
				}
		}

		i++;

		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
	}

	return (s);
}
