#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: string pointer variable
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int x, z;

	for (x = 0; x < 8; x++)
	{
		for (z = 0; z < 8; z++)
		{
			_putchar(a[x][z]);
		}
		_putchar('\n');
	}
}
