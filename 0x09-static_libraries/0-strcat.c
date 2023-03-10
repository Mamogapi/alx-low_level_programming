#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: character variable
 * @src: character variabe
 * Return: character variable
 */

char *_strcat(char *dest, char *src)
{
	int x, y;

	y = 0;

	while (dest[y] != '\0')
		y++;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[y] = src[x];
		y++;
	}
	return (dest);
}
