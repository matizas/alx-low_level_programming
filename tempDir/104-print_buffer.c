#include "main.h"
#include <stdio.h>
void print_ln(char *c, int s, int l);

/**
 * print_line - prints a s bytes of a buffer
 * @c: ref parameter, buffer to print
 * @s: value parameter, bytes of buffer to print
 * @l: valuel parameter, line of buffer to print
 * Return: void
 */

void print_ln(char *c, int s, int l)
{
	int j, k;

	for (j = 0; j <= 9; j++)
	{
		if (j <= s)
			printf("%02x", c[l * 10 + j]);
		else
			printf("  ");
		if (j % 2)
			putchar(' ');
	}
	for (k = 0; k <= s; k++)
	{
		if (c[l * 10 + k] > 31 && c[l * 10 + k] < 127)
			putchar(c[l * 10 + k]);
		else
			putchar('.');
	}
}

/**
 * print_buffer - prints a buffer
 * @b: ref parameter, buffer to print
 * @size: value parameter, size of buffer
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i <= (size - 1) / 10 && size; i++)
	{
		printf("%08x: ", i * 10);
		if (i < size / 10)
		{
			print_ln(b, 9, i);
		}
		else
		{
			print_ln(b, size % 10 - 1, i);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}