#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a
 * listint_t linked list.
 * @head: listint_t pointer
 * @index: integer value of a index
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x = 0;

	listint_t *delNode, *preNode;

	if (*head == NULL)
		return (-1);

	delNode = *head;
	preNode = NULL;

	if (index == 0)
	{
		*head = (*head)->next;
		free(delNode);
		return (1);
	}

	while (x < index - 1)
	{
		if (!delNode || !(delNode->next))
			return (-1);
		delNode = delNode->next;
		x++;
	}
	preNode = delNode->next;
	delNode->next = preNode->next;
	free(preNode);

	return (1);
}
