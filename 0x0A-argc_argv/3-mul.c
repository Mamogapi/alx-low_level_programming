#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * Your program should print the result of the multiplication, followed
 * by a new line
 * @argc: integer variable
 * @argv: character variable
 *
 * Return: integer number or 1 to indicate error
 */

int main(int argc, char *argv[])
{
	int x, z, y;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	z =  atoi(argv[2]);
	y = x * z;

	printf("%d\n", y);
	return (0);
}
