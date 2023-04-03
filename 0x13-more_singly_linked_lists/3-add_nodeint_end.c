#include "lists.h"

/**
 * add_nodeint_end -  function that adds a new node at the end of a
 * listint_t list
 * @head: double pointer of listint_t
 * @n: integer variable
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nodeN, *temp;

	nodeN = malloc(sizeof(listint_t));

	if (nodeN == NULL)
		return (NULL);
	else
	{
		nodeN->n = n;
		nodeN->next = NULL;
		temp = *head;

		if (*head == NULL)
		{
			*head = nodeN;
			return (nodeN);
		}

		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = nodeN;
	}
	return(*head);
}
