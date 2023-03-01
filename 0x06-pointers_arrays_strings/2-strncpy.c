#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 * @dest: output charcter variable
 * @src: input characetr variable
 * @n: number of bytes to copy
 * Return:  copied a string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for(x = 0; src[x] != '\0' && x < n; x++)
	{
		dest[x] = src[x];
	}
	for (; x < n; x++)
		dest[x] = '\0';

	return (dest);
}
