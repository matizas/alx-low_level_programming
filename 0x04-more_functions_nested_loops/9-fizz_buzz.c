#include <stdio.h>
#include "main.h"
void print_fizz_buzz(void);

/**
 * main - to call a method fizz_buzz
 *
 * Return: 0 if successful
 */

int main(void)
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

	return (0);
}
