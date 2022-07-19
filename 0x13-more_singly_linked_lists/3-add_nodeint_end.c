#include "lists.h"

/**
 * add_node_end - adds a new node to the end
 * of a singly linked list
 * @head: a pointer to the address of the
 * beginning of the listint_t list
 * @n: pointer to the string to add
 *
 * Return: the address of the new element, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	/* allocate memory to heap */
	new_node = malloc(sizeof(size_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	/* Locate the end of listint_t: if empty append new_node */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	/* esle iterate to the last node */
	while (temp->next)
		temp = temp->next;
	/* append new_node */
	temp->next = new_node;

	return (new_node);
}
