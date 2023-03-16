#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *stcp(char *str1, char *str2, unsigned int x);

/**
 * _realloc - function that reallocates a memory block using malloc
 * and free
 * @ptr: void pointer variable
 * @old_size: integer variable
 * @new_size: integer variable
 * Return: 0
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pnt;
	unsigned int x;

	if (ptr == NULL)
	{
		pnt = malloc(new_size);
		return (pnt);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size < old_size)
		x = new_size;
	else
		x = old_size;

	pnt = malloc(new_size);

	if (pnt == NULL)
		return (NULL);

	pnt = stcp(pnt, ptr, x);
	free(ptr);
	return (pnt);
}

/**
 * stcp - copy the string
 * @str1: string variable
 * @str2: string variable
 * @x: integer variable
 * Return: string pointer
 */

char *stcp(char *str1, char *str2, unsigned int x)
{
	unsigned int z;

	for (z = 0; z < x; z++)
	{
		str1[z] = str2[z];
	}
	return (str1);
}
