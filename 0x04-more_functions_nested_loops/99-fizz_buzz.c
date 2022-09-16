#include <stdio.h>
#include "main.h"

/**
 * main - to call a method fizz_buzz
 *
 * Return: 0 if successful
 */

int main(void)
{
	int i, j;


	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s ", "FizzBuzz");

		else if (i % 5 == 0)
			printf("%s ", "Buzz");

		else if (i % 3 == 0)
			printf("%s ", "Fizz");

		else
			printf("%d ", i);
	}
	printf("\n");

	return (0);
}
