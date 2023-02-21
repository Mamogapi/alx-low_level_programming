#include <stdio.h>
#include <ctype.h>
/**
 * _isalphia - checks for alphabetic character
 * @c: character
 *
 * Return: 1 if c is a letter, lowercase or uppercase or 0 otherwise
 */

int _isalpha(int c)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (c == x || c == toupper(x))
			return (1);
	}
	return (0);

}
