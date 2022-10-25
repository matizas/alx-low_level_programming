#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: stores the address of the first node.
 *
 * Return: no return.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;

		free(temp);
	}
}
