#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: listint_t pointer
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	int x;
	listint_t *temp = *head;

	if (*head == NULL)
		return (0);
	x = temp->n;
	temp = temp->next;
	free(*head);
	*head = temp;

	return (x);
}
