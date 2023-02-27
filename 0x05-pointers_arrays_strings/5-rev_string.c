#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: character variable
 * Return: 0
 */

void rev_string(char *s)
{
	int a, b;
	char temp;

	a = 0;
	b = 0;

	b = strlen(s);

	for (a; a < b; a++)
	{
		b--;
		temp = s[a];
		s[a] = s[b];
		s[b] = temp;
	}
}
