#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: stores the address of the first node.
 * Return: numbers of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
