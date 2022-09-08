#include <stdio.h>

/**
 * main - program entry point
 *
 * Description: program that prints the size of various types on the computer
 * Return: 0 always when successful
*/

int main(void)
{
	char c;
	int i;
	long l;
	long long lg;
	float f;

	printf("Size of a char: %Id byte(s)\n", sizeof(c));
	printf("Size of an int: %Id byte(s)\n", sizeof(i));
	printf("Size of a long int: %Id byte(s)\n", sizeof(l));
	printf("Size of a long long int: %Id byte(s)\n", sizeof(lg));
	printf("Size of a float: %ld bytes(s)\n", sizeof(f));

	return (0);
}
