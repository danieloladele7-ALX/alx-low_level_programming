#include "lists.h"

/**
 * sum_listint - sums up all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
