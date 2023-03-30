#include "lists.h"

/**
 * list_len - function returns the number of elements in a linked list_t
 * list
 * @h: linker variable
 * Return: the number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	size_t x = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		x++;
		h = h->next;
	}
	return (x);
}
