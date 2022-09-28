#include "main.h"

/**
 * wildcmp - compare to strings, including those containing wild cards
 * @s1: ref parameter to store address of the first string
 * @s2: ref parameter to store the address of the secong string
 * Return: 1 if strings are identical else 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return  (1);
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		else if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
			return (1);
		else
			return (0);
	}
	else
		return (0);
}
