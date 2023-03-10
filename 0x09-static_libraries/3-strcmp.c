#include "main.h"
#include <stdio.h>

/**
 * _strcmp - function that compares two strings
 * @s1: character variable one
 * @s2: character variable two
 * Return: 0 if the strings are equal and any other number if they are not
 */

int _strcmp(char *s1, char *s2)
{
	int w, z;

	z = 0;
	w = 0;

	while (s1[z] != '\0' && s2[z] != '\0')
	{
		w = s1[z] - s2[z];

		if (w != 0)
		{
			break;
		}
		z++;
	}
		return (w);

}
