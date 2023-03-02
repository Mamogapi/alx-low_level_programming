#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @dest: output character variable
 * @src: input character variable
 * @n: the number of bytes to copy
 * Return: copied character variable
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	y = 0;

	while (dest[y] != '\0')
		y++;

	for (x = 0; src[x] != '\0' && x < n; x++)
	{
		dest[y] = src[x];
		y++;
	}

	if (x < n)
	{
		dest[y] = '\0';
	}
	return (dest);
}
