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
	int flag = 0, i = 1, j, sum = 0;
	char c = '0';

	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0' && !flag)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				c = '1';
				flag = 1;
			}
			j++;
		}
		i++;
	}

	if (c == '0')
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) > 0)
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}

	else if (argc < 1)
	{
		printf("0\n");
	}

	else
	{
		printf("ERROR\n");
		return (1);
	}
	return (0);
}
