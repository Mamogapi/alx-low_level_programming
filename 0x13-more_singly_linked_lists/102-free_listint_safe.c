#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list
 * @h: listint_t double pointer
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	int y;
	listint_t *nodes;
	size_t x = 0;

	if (!h)
		return (0);

	while (*h)
	{
		y = *h - (*h)->next;
		if (y > 0)
		{
			nodes = (*h)->next;
			free(*h);
			*h = nodes;
			y++;
		}
		else
		{
			free(*h);
			*h = NULL;
			y++;
			break;
		}
	}
	*h = NULL;

	return (y);
}
