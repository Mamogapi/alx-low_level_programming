#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int strng_length(char strng);
char *strng_concat(char *strn, char *strn2, int z);

/**
 * str_concat - function the concatenates two strings
 * @s1: input string variable
 * @s2: intput string variable
 *
 * Return: pointer should point to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2,
 * and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	int x, y;
	char *wrd;

	x = strng_leng(s1);
	y = strng_leng(s2);

	wrd = malloc(((x + y) + 1) sizeof(char));

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (wrd == NULL)
		return (NULL);

	strng_concat(wrd, s1, x);
	strng_concat(wrd, s2, y);
	wrd = wrd + '\0';
	return (wrd);
}

/**
 * strng_length - function count the lngth of the string
 * @strng: input string variable
 *
 * Return: the length of the string
 */

int strng_length(char strng)
{
	int y;

	for (y = 0; strng[y] != '\0'; y++)
	{

	}
	return (y);
}

/**
 * strng_concat - function to concatnate string with n bytes
 * @strn: concatnate string
 * @strn2: input string
 * @z: integer variable
 * Return: string variable
 */

char *strng_concat(char *strn, char *strn2, int z)
{
	int a, b;

	a = strng_length(strn);

	for (b = 0; b < z && strn2[b] != '\0'; b++)
		strn[a + b] = strn2[b];

	return (strn);
}
