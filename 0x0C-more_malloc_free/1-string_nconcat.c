#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string pointer variable
 * @s2: string pointer variable
 * @n: input integer variable
 * Return: pointer else NULL, if n >= s2 then return s2 else empty string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str1;
	unsigned int x = 0, y, z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[x] != '\0')
		x++;
	z = (x + n) * sizeof(*str1);
	str1 = malloc(z + 1);

	if (str1 == NULL)
		return (NULL);
	for (x = 0; x < z && s1[x] != '\0'; x++)
		str1[x] = s1[x];
	for (y = 0; x < z && s2[y] != '\0'; y++)
	{
		str1[x] = s2[y];
		x++;
	}
	str1[x] = '\0';
	return (str1);
}
