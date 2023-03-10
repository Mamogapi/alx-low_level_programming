#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * verify_num - check if the character that is a number
 * @x: character variable
 *
 * Return: 1 or 0
 */

int verify_num(char x)
{
	int x = 0, y = 0, w;

	w = strlen(a);
	while (x < w)
	{
		if (a[x] < '0' || a[x] > '9')
		{
			return (-1);
		}
		else
			y = y * 10 + (a[x] - '0');

		x++;
	}
	return (y);
}
/**
 * main - adds positive numbers
 * @argc: integer variable
 * @argv: charater variable
 *
 * Return: 1 or integer value
 */

int main(int argc, char *argv[])
{
	int x = 1, y, z;

	z = 0;

	while (x < argc)
	{
		y = verify_num(argv[x]);

		if (y == -1)
		{
			printf("Error\n");
			return (1);
		}
		z = z + y;
		x++;
	}
	printf("%d\n", z);
	return (0);
}