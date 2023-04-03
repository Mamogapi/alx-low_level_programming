#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a
 * listint_t list
 * @head: listint_t pointer
 * @n: integer variable
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodeN;

	nodeN = malloc(sizeof(listint_t));

	if (nodeN == NULL)
		return (NULL);
	else
	{
		nodeN->n = n;
		nodeN->next = *head;
		*head = nodeN;
	}
	return (*head);
}
