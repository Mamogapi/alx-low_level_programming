#include "lists.h"

/**
 * print_list - function prints all the elements of a list_t list
 * @h: pointer value
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t x = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			print("[%u] %s\n", h->len, "(nil)");
		else
			print("[%u] %s\n", h->len, h->str);
		h = h->next;
		x++;
	}
	return (x);
}
