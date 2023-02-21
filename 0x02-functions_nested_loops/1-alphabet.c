#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - function prints the alphabet, in lowercase
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char alph[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
		'j', 'k', 'l', 'm', 'n', 'o', 'p', 'r', 's', 't', 'u',
		'v', 'w', 'x', 'y', 'z' };

	int i;

	for (i = 0; i < 26 ; i++)
	{
		_putchar(alph[i]);
	}
	_putchar('\n');

}
