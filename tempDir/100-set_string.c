#include "main.h"

/**
 * set_string - set the value of a pointer to char
 * @s: double pointer, stores the address of another pointer
 * @to: pointer to store the address of a variable
 * Return: program does not return anything
 */

void set_string(char **s, char *to)
{
	*s = to;
}
