#include "lists.h"

/**
 * list_len - counts the number of elements in a linked list
 * @h: pointer to the start of the singly linked list
 *
 * Return: number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t node;

	for (node = 0; h; node++)
		h = h->next;
	return (node);
}
