#include <stdio.h>
#include <stdlib.h>
/**
 * main - the entry point of a program
 *
 * Description: print whether the number is positive or negative.
 * Return: 0 if successful
 */

/* betty style doc for function main goes there */
int main(void)
{
	int x, y, m, n, counter; 

	for (m = 0; m<=9; m++)
	{
		putchar(m + '0');
		for (n = 0; m <= 9; n++)
		{
			putchar(n + '0');
			for (y = 0; y <= 9; y++)
			{
				putchar(y + '0');
				for (x = 1; x <= 9; x++)
				{
					putchar(',');
					putchar(' ');

					putchar(x + '0');
				}
			}
		}
	}
				
/*putchar('\n');*/
return (0);
}
