#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: character valriable
 * @src: character variable
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x]; x++)
	{
		dest[x] = src[x];
	}

	dest[x] = src[x];
	return (dest);
}
