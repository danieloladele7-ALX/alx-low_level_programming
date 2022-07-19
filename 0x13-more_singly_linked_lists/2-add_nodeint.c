#include "lists.h"

/**
 * add_nodeint - adds a new node to the beginning
 * of a singly linked list
 * @head: a pointer to the address of the
 * beginning of the list_t list
 * @n: the number to add
 *
 * Return: the address of the new element, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	/* allocate memory to heap */
	temp = malloc(sizeof(size_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = (*head);
	(*head) = temp;

	return (*head);
}
