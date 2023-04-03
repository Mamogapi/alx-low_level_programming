#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: listint_t pointer
 * Return: 0
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *curNode;

	if (head != NULL)
	{
		curNode = *head;

		while ((temp = curNode) != NULL)
		{
			curNode = curNode->next;
			free(temp);
		}
		*head = NULL;
	}
}
