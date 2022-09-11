#include <stdio.h>
#include <stdlib.h>
/**
 *main - the entry point of a program
 *
 *Description: print whether the number is positive or negative.
 *Return: 0 if successful
 */

int main(void)
{
	int baseCounter, increamentCounter, base, change;

	baseCounter = 0;
	while (baseCounter < 100)
	{
		increamentCounter = baseCounter + 1;
		while (increamentCounter < 100)
		{
			base = baseCounter / 10;
			change = baseCounter % 10;
			putchar(base + '0');
			putchar(change + '0');
			putchar(' ');

			base = increamentCounter / 10;
			change = increamentCounter % 10;
			putchar(base + '0');
			putchar(change + '0');

			if (baseCounter == 98 && increamentCounter == 99)
				break;
			putchar(',');
			putchar(' ');
			increamentCounter++;
		}
		baseCounter++;
	}
	putchar('\n');
	return (0);
}

