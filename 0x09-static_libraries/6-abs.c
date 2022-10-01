#include "main.h"

/**
* _abs - this function prints the sign of a number
* @n: the function has a parameter n of type integer
* Return: 0 if successful
*/

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
