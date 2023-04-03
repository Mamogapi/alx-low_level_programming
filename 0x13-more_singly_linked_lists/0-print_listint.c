#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t
 * list
 * @h: pointer variable
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	if (listint_t == NULL)
	{
		printf("List is empty");
		break;
	}
	else
	{
		while (h != NULL)
		{
			printf("%d\n", h->n);
			x++;
			h = h->next;
		}
		return (x);
	}
}
