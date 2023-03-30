#include "lists.h"

int cal_len(const char *str);

/**
 * add_node - function adds a new node at the beginning of a list_t list
 * @head: linker double pointer
 * @str: pointer char variable
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = (list_t *)malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = cal_len(str);
	temp->next = (*head);
	(*head) = temp;

	return (temp);
}

/**
 * cal_len - fucntion calculate the length of string
 * str: pointer string variable
 * Return: length of string
 */

int cal_len(const char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}
