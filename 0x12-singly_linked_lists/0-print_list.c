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

			printf("%s\n", "[0], (nil)");

		else

			printf("%s\n", h->str);

		h = h->next;

		count++;
	}
	printf("\n");
	return (ount);
}
