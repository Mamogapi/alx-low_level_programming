#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev -  prints a string, in reverse, followed by a new line
 * @s: character variable
 * Return: 0
 */

void print_rev(char *s)
{
	int z;

	z = strlen(s);

	for (; z > 0; z--)
	{
		_putchar(s[z]);
	}
	_putchar('\n');
}
