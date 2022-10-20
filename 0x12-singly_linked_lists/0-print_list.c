#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of the list.
 * @h: node.
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)

			printf("[%d] %s\n", 0, "(nil)");

		else

			printf("[%d] %s\n", h->len, h->str);

		h = h->next;

		count++;
	}
	printf("\n");
	return (count);
}
