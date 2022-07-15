#include "lists.h"

/**
 * free_list - frees a singly linked list
 * list is freed from head, and next is made the new head.
 * @head: list_t list to be freed
 *
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
