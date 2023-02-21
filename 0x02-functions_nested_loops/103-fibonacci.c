#include <stdio.h>

/**
 * main -  prints the sum of the even-valued terms, followed
 * by a new line.
 * Return: 0
 */

int main(void)
{
	long int x, y, z, tot;

	x = 0;
	z = 1;
	tot = 0;
	y = 0;

	while (y < 4000000)
	{
		y = x + z;
		x = z;
		z = y;
		if (y % 2 == 0)
		tot = tot + y;
	}
	printf("%ld\n", tot);
	return (0);
}
