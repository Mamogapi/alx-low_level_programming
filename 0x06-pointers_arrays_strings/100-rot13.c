#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @a: input string
 * Return: encoded a string
 */

char *rot13(char *a)
{
	int x, z;

	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; a[x] != '\0'; x++)
	{
		for (z = 0; s1[z] != '\0'; z++)
		{
			if (a[x] == s1[z])
			{
				a[x] = s2[z];
				break;
			}
		}
	}
	a[x] = '\0';
	return (a);
}
