#include <stdio.h>
#include "main.h"

/**
 * main -  prints _putchar, followed by a new line
 *
 * Return: Always 0
*/

int main(void)
{
	char messg[] = "_putchar";
	int x;

	for (x = 0; x < MAXSTRING; x++)
	{
		_putchar(messg[x]);
	}
	_putchar('\n');

	return (0);
}
