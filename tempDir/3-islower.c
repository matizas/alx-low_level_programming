#include "main.h"

/**
*_islower - this function determines if character is lower case
*@c: the function has a parameter c of type int
*Return: 0 if successful
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
