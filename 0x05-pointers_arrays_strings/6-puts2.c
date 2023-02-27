#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string, starting with
 * the first character, followed by a new line.
 * @str: character variable
 * Return: 0
 */

void puts2(char *str)
{
	int x, z;

	z = strlen(str);
	z--;

	for (x = 0; x <= z; x++)
	{
		if ((x % 2) == 0)
		{
			_putchar(str[x]);
		}
	}

	_putchar('\n');
}
