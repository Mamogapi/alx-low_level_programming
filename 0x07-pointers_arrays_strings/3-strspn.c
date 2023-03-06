#include "main.h"
#include <stdio.h>

/**
 *  _strspn - gets the length of a prefix substring
 *  @s: string pointer variable
 *  @accect: string pointer variable
 *  
 *  Return: the number of bytes in the initial segment of s which
 *  consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int w, z;

	for (w = 0; s[w] != '\0'; w++)
	{
		for (z = 0; accept[z] =! '\0'; z++)
		{
			if (accept[z] == '\0')
				return (w);
		}
	}
	return (w);
}
