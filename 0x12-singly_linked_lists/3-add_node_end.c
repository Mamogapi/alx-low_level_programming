#include "lists.h"

int cal_len(const char *str);

/**
 * add_node_end - function adds a new node at the end of a list_t list
 * @head: linker double pointer
 * @str: pointer string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;

	new = (list_t *)malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = cal_len(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;

		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}

/**
 * cal_len - function calculate the length of string
 * @str: pointer string
 * Return: the length of string
 */

int cal_len(const char *str)
{
	int x = 0;

	while (str[x] != '\0')
		x++;

	return (x);
}
