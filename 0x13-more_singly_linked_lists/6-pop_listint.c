#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: listint_t pointer
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	int x;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	x = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (x);
}
