#include "main.h"
#include <stdio.h>

/**
 * string_toupper -  changes all lowercase letters of a string to uppercase.
 * @a: string input
 * Return: the string into uppercases
 */

char *string_toupper(char *a)
{
	int x;

	for (x = 0; a[x] != '\0'; x++)
	{
		if (a[x] >= 'a' && a[x] <= 'z')
		{
			a[x] = 'A' + (str[x] - 'a');
		}
	}
	return (a);
}
