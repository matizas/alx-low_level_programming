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
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(a));
	printf("Size of an int: %lu byte(s)\n", sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(d));
	printf("Size of a float: %lu bytes(s)\n", sizeof(f));
	return (0);
}
