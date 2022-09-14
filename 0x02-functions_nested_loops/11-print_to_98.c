#include "main.h"

/**
 * *print_to_98 - this function prints all natural numbers up to 98
 * *@n: the function has a parameter n of type integer
 * *Return: 0 if successful
 * */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d, ", n++);
		} 
		printf("d\n", n);
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
		printf("%d\n", n);
	}
}
