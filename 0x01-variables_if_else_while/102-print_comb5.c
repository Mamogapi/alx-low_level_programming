#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0
 */

int main(void)
{
	int i, x;

	for (x = 0; x < 99 ; x++)
	{
		for (i = x + 1; i < 100 ; i++)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			putchar(32);
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			if (x == 98 && i == 99)
				continue;

			putchar(',');
			putchar(32);
		}
	}

	putchar('\n');
	return (0);
}
