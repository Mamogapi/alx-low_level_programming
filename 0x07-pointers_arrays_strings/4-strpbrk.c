#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string pointer variable
 * @accept: string pointer variable
 *
 * Return:  a pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b, c, d = 0;

	c = strlen(s);
	c--;

	for (a = 0; accept[a] != '\0'; a++)
	{
		for (b = 0; s[b] !='\0'; b++)
		{
			if (accept [a] == a[b])
			{
				if (b <= c)
				{
					c = b;
					d = 1;
				}
			}
		}	
	}
	if (d == 1)
		return (&s[c]);
	else
		return (NULL);

}
