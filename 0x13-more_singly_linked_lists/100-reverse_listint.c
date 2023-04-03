#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: listint_t pointer
 * Return:  a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *preNode, *curNode;

	curNode = NULL;
	preNode = NULL;

	while (*head)
	{
		curNode = (*head)->next;
		(*head)->next = preNode;
		preNode = *head;
		*head = curNode;
	}

	*head = preNode;
	return (*head);
}
