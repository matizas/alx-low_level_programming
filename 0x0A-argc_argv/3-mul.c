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
	long int i, j, a = 0, b = 0, p;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] != 45)
				{
					if (argv[i][j] < 48 || argv[i][j] > 57)
					{
						printf("ERROR\n");
						return (1);
					}
				}
			}
		}
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		p = a * b;
		printf("%ld\n", p);
	}
	else
	{
		printf("ERROR\n");
		return (1);
	}
	return (0);
}
