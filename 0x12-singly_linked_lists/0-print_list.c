#include "lists.h"

/**
 * print_list - prints the elements in the linked list
 * @h: the node of the linked list
 * Return: void
 */

size_t print_list(const list_t *h)
{
	char *s = "[0] (nil)";
	int i = 0, count = 0;

	if (h->str == NULL)
	{
		while (s[i] != '\0')
		{
			_putchar(s[i]);
			i++;
		}
	}

	while (h->next != NULL)
	{
		i = 0;
		while (h->str[i] != '\0')
		{
			_putchar(h->str[i]);
			i++;
		}
		_putchar('\n');
		count++;
		h = h->next;
	}
	return (count);
}
