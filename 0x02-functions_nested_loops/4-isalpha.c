#include "main.h"

/**
* _isalpha - this function determines if character is lower case
* @c: the function has a parameter c of type integer
* Return: 0 if successful
*/

int _isalpha(int c)
{
	int flag = 0;
	if ((c >= 97 && c <= 122) || (c >= 65 && c >= 90))
		flag = 1;

	return (flag);
}
