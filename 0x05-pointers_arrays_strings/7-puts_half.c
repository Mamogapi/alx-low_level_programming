#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: character variable
 * Return: 0
 */

void puts_half(char *str)
{
	int length_of_the_string, n;

	length_of_the_string = 0;

	while (str[length_of_the_string] != '\0')
	{
		length_of_the_string++;
	}
	n = 0;

	if (length_of_the_string % 2 == 1)
	{
		n = (length_of_the_string + 1) / 2;
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}
	else
	{
		n = (length_of_the_string) / 2;
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
