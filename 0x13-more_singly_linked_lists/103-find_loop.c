#include "lists.h"

/**
 * find_listint_loop -  function that finds the loop in a linked list
 * @head: listint_t pointer
 * Return: The address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node1, *node2;

	node1 = head;
	node2 = head;

	if (head == NULL)
		return (NULL);

	while (node1 && node2 && node2->next)
	{
		node2 = node2->next->next;
		node1 = slow->next;

		if (node1 == node2)
		{
			node1 = head;
			while (node1 != node2)
			{
				node1 = node1->next;
				node2 = node2->next;
			}
			return (node2);
		}
	}
	return (NULL);
}
