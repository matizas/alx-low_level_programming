#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - generating a random password
 *
 * Return: always 0
 */

int main(void)
{
	int ascii, i, j, iRandom;
	char passwd[150];
	time_t t;

	i = 0;
	ascii = 2772;

	srand((int) time(&t));
	while (ascii > 126)
	{
		iRandom = rand() % 126;
		passwd[i] = iRandom;
		ascii -= iRandom;
		i++;
	}
	if (ascii > 0)
	{
		passwd[i] = ascii;
	}
	else
		i--;

	for (j = 0; j <= i; j++)
	{
		printf("%c", passwd[j]);
	}

	return (0);
}



