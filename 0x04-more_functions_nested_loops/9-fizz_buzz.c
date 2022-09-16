#include <stdio.h>
#include "main.h"
void fizz_buzz(void);

/**
 * main - to call a method fizz_buzz
 *
 * Return: 0 if successful
 */

int main(void)
{
	fizz_buzz();

	return (0);
}

/**
 * * fizz_buzz - print a square
 *
 * Return: does not return a value
 */

void fizz_buzz(void)
{
	int i, j;
	char a[] = "Fizz";
	char b[] = "Buzz";
	char ab[] = "FizzBuzz";


	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s ", ab);
		else if (i % 5 == 0)
			printf("%s ", b);
		else if (i % 3 == 0)
			printf("%s ", a);
		else
			printf("%d ", i);
	}
	printf("\n");
}
