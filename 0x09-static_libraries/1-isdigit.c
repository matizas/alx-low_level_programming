#include "main.h"

/**
 * _isdigit - writes the character c to stdout
 * @c: The to check digit
 *
 * Return: 1 if digit else 0
 */

int _isdigit(int c)
{
	int flag;

	flag = 0;
	if (c >= 48 && c <= 57)
	{
		flag = 1;
	}

	return (flag);
}
