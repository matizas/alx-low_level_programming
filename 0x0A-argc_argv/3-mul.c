#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to determine number of arguments
 * @argc: value parameter to store number of arguments
 * @argv: ref parameter to store a string of arguments
 * Return: does not return anything
 */

int main(int argc, char *argv[])
{
	int a = 0, b = 0, p;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		p = a * b;
		printf("%d\n", p);
	}
	else
	{
		printf("ERROR\n");
	}
	return (0);
}
