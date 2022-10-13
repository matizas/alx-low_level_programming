#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - to print all string arguments passed
 * @separator: defined the separator to seperate arguments
 * @n: number of arguments
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *check;
	va_list argz;

	if (n > 0)
	{
		if (separator == NULL)
			separator = "";

		va_start(argz, n);

		for (i = 0; i < n; i++)
		{
			check = va_arg(argz, char *);

			if (check == NULL)
				check = "(nil)";

			printf("%s", check);
			if (i != n - 1)
				printf("%s", separator);
		}
	}
	va_end(argz);
	printf("\n");
}
