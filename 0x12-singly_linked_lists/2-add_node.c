#include "lists.h"

/**
 * add_node - adds a new node to the beginning
 * of a singly linked list
 * @head: a pointer to the address of the
 * beginning of the list_t list
 * @str: pointer to a string
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *temp;

	/* get length of string */
	while (*(str + len))
		len++;

	/* allocate memory to heap */
	temp = malloc(sizeof(size_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = len;
	temp->next = (*head);
	(*head) = temp;

	return (*head);
}
