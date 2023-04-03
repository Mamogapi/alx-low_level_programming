#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: listint_t pointer
 * Return:  a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode, *curNode;

	prevNode = head;
	curNode = head->next;
	head = head->next;
	preNode->next = NULL;

	while (*head != NULL)
	{
		head = head->next;
		curNode->next = prevNode;
		preNode = curNode;
		curNode = head;
	}
	*head = prevNode;
	return (*head);
}
