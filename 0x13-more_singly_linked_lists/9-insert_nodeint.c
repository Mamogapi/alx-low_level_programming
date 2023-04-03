#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: listint_t pointer
 * @idx: the index of the list where the new node should be added
 * @n: integer value
 * Return: 0
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *nodeP, *temp;

	nodeP = malloc(sizeof(listint_t));

	if (nodeP == NULL)
		return (NULL);
	else
	{
		nodeP->n = n;
		nodeP->next = NULL;

		if (idx == 0)
		{
			nodeP->next = *head;
			*head = nodeP;
			return (nodeP);
		}
		temp = *head;
		for (x = 0; x < idx && temp != NULL; x++)
		{
			if (x == idx - 1)
			{
				nodeP->next = temp->next;
				temp->next = nodeP;
				return (nodeP);
			}
			else
				temp = temp->next;
		}
	}
	return (NULL);
}
