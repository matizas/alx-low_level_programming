#include <stdio.h>
#include <math.h>
#include "main.h"
void prime_factors(long int);

/**
 * main - to call a method fizz_buzz
 *
 * Return: 0 if successful
 */

int main(void)
{
	long int num = 612852475143;

	prime_factors(num);

	return (0);
}

/**
 * prime_factors - determine prime factors
 *@n: parameter long long
 *
 * Return: does not return a value
 */

void prime_factors(long int n)
{

	long int max, i;

	while (n % 2 == 0)
	{
		max = 2;
		n = n / 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}

	if (n > 2)
	{
		max = n;
	}
	printf("%ld\n", max);
}
