#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strchr - function that locates a character in a string
 * @s: string variable
 * @c: string variable
 *
 * Returns:  a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
		{	
			return (s[x]);
		}
	}
	if (x == strlen(s) - 1)
		return (NULL);


}

