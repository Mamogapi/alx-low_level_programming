#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int str_length(char *strng);

/**
 * _strdup - function returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: input string variable
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	int x, y;
	char *copy;

	y = str_length(str) + 1;
	copy = malloc(y * sizeof(char));

	if (str == NULL)
		return (NULL);
	if (copy == NULL)
		  return (NULL);

	for (x = 0; x < y; x++)
	{
		copy[x] = str[x];
	}
	return (copy);
}

/**
 * str_length - function that return the length of string
 * @strng: intput string variable
 *
 * Return: the integer value
 */

int str_length(char *strng)
{
	int x;

	for (x = 0; strng[x] != '\0'; x++)
	{

	}
	return (x);
}
