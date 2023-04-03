#include "lists.h"

/**
 * sum_listint -  function that returns the sum of all the data (n) of
 * a listint_t linked list
 * @head: listint_t pointer
 * Return: the sum of all the data (n) of a listint_t linked list
 */

int sum_listint(listint_t *head)
{
	int x = 0;

	if (head == NULL)
		return (0);
	else
	{
		while (head != NULL)
		{
			x += head->n;
			head = head->next;
		}
		return (x);
	}
}
