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

	while (str != '\0')
		length_of_the_string ++;

	if (length_of_the_string % 2 == 1)
	{
		n = (length_of_the_string + 1) / 2;
		for (n; n <= length_of_the_string; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		n = (length_of_the_string / 2);
		for (n; n <= length_of_the_string; n++)
		{
			 _putchar(str[n]);
		}
	}
	_putchar('\n');
}
