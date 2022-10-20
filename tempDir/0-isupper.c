#include "main.h"

/**
 * _isupper - writes the character c to stdout
 * @c: The character to check
 *
 * Return: 1 if capital letter else 0
 */

int _isupper(int c)
{
	int flag;

	flag = 0;
	if (c >= 65 && c <= 90)
	{
		flag = 1;
	}

	return (flag);
}
