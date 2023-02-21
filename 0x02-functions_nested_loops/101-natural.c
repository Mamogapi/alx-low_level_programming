#include <stdio.h>

/**
 * main -  prints the sum of all the multiples of 3 or 5 below 1024
 * Return: Always 0
 *
 */

int main(void)
{
	int x, tot;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			tot = tot + x;
		}
	}
	printf("%d\n", tot);

	return (0);
}
