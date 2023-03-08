#include "main.h"
#include <stdio.h>

int verify_pal(char *s, int x, int z);
int strlen_recurs(char *s);

/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 * and 0 if not
 * @s: input string variable
 *
 * Return: returns 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (verify_pal(s, 0, strlen_recurs(s)));
}

/**
 * strlen_recurs - function that returns the length of a string
 * @s: input string variable
 *
 * Return: returns the length of a string
 */

int strlen_recurs(char *s)
{
	if (*s != '\0')
		return (1 + strlen_recurs(s + 1));
	else
		return (0);
}

/**
 * verify_pal - function that check character recursively for palindrome
 * @s: input string variable
 * @x: integer increment
 * @z: integer variable for length of a string
 *
 * Return: returns 1 if a string is a palindrome and 0 if not
 */

int verify_pal(char *s, int x, int z)
{
	if (*(s + x) != *(s + z - 1))
		return (0);
	if (x >= z)
		return (1);
	return (verify_pal(s, x + 1, z - 1));
}

