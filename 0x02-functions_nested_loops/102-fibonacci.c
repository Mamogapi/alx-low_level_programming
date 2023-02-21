#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting
 * with 1 and 2, followed by a new line.
 * Return: 0
 */

int main(void)
{
	long int x = 0;
	long int y = 1;
	long int z = 1;
	long int w;

	for (z = 1; z <= 50; z++)
	{
		w = x + y;
		printf("%ld", w);
		if (z <= 50)
		{
			printf(", ");
		}
		x = y;
		y = w;
	}
	printf("\n");

	return (0);
}
