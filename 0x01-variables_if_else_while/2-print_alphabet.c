#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Sucess)
*/
 
int main(void)
{
	char alph;

 	do {
	alph = 'a';
	putchar(alph);
	alph++;
	} while (alph <= 'z');
	
	putchar('\n');
	return (0);
}

