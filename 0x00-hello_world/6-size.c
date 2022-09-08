#include <stdio.h>

/**
 * main - program entry point
 *
 * Description: prints the size of various data types
 * Return: 0 always when successful
*/

int main(void)
{
	char a;
	int b;
	long c;
	long long d;
	float e;

	printf("Size of a char: %ld byte(s)\n", sizeof(a));

	return (0);
}
