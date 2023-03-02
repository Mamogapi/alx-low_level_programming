#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string
 * @a: input string
 * Return: capitalized words
 */

char *cap_string(char *a)
{
	char strng[] = {' ', ',', ';', '.', '!', '?', '"',
		'(', ')', '{', '}', '\t', '\n', '\0'};

	int x, z;
	int y =32;

	for (x = 0; a[x] != '\0'; x++)
	{
		if (a[x] >= 'a' && a[x] <= 'z')
		{
			a[x] = a[x] - w;
		}
		w = 0;

		for (z = 0; strng[z] != '\0'; z++)
		{
			if (strng[z] == a[x])
			{
				w = 32;
				break;
			}
		}
	}
	return (a);
}
