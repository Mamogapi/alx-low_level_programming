#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring
 * @haystack: string pointer variable
 * @needle: string pointer variable
 *
 * Return: pointer to the beginning of the located substring, or
 * NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int x, y;

	for (; *haystack != '\0'; haystack++)
	{
		char *cp1 = haystack;
		char *cp2 = needle;

		while (*cp1 == *cp2 && *cp2 != '\0')
		{
			cp1++;
			cp2++;
		}
		if (*cp2 == '\0')
			return (haystack);
	}
	return (NULL);
}
