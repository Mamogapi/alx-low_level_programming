#include "lists.h"

/**
 * add_node - function adds a new node at the beginning of a list_t list
 * @head: linker double pointer
 * @str: pointer char variable
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int x = 0;

	temp = (list_t *)malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	while (str[x] != '\0')
	{
		x++;
	}

	temp->str = strdup(str);
	temp->len = x;
	temp->next = *head;
	*head = temp;

	return (*head);
}
