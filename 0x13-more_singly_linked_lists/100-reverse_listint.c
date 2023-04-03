#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: listint_t pointer
 * Return:  a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode, *curNode;

	curNode = NULL;
	preNode = NULL;

	while (*head)
	{
		curNode = head->next;
		head->next = prevNode;
		preNode = head;
		head = curNode;
	}

	*head = prevNode;
	return (*head);
}
