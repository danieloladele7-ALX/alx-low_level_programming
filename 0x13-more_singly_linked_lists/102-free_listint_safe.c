#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	for (size = 0; *h; size++)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		} else
		{
			free(*h);
			*h = NULL;
			break;
		}
	}
	*h = NULL;

	return (size);
}
