#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Succes)
*/

int main(void)
{
	int x;
	int i;

	for (x = 0 ; x < 9 ; x++)
	{
		i = x + 1;
		do {
			putchar('0' + x);
			putchar('0' + i);
			if (n < 8)
			{
				putchar(',');
				putchar(32);
			}
			i++;
		} while (i < 10);
	}
	putchar('\n');
	return (0);
}

