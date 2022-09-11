#include <stdio.h>
#include <stdlib.h>

int main()
{
	int baseCounter, increamentCounter, base, change;
	baseCounter = 0;
	while (baseCounter < 100)
	{
		increamentCounter = baseCounter + 1;
		while(increamentCounter < 100)
		{
			base = baseCounter / 10;
			change = baseCounter % 10;
			putchar(base + '0');
			putchar(change + '0');
			putchar(',');
			putchar(' ');
			base = increamentCounter / 10;
			change = increamentCounter % 10;
			putchar(base + '0');
			putchar(change + '0');
			putchar(',');
			putchar(' ');
			increamentCounter++;
		}
		baseCounter++;
	}
	return (0);
}

