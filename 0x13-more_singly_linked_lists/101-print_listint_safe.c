#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: listint_t pointer
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	long int y;
	size_t x = 0;

	while (head)
	{
		y = head - head->next;
		x++;
		printf("[%p] %d\n", (void*)head, head->n);
		if (y > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void)*head->next, head->next->n);
			break;
		}
	}
	return (x);
}
