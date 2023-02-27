#include <stdio.h>
#include <string.h>

/**
 * _strlen -  returns the length of a string
 * @s: charactor variable
 * Return: integer value
 */

int _strlen(char *s)
{
	int z;

	z = 0;

	while (s[z] != '\0')
	{
		z++;
	}
	return (z);
}
