#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Sucess)
*/
 
int main(void)
{
	char alph;

 	while (alph <= 'z') {
	alph = 'a';
	putchar(alph);
	alph++;
	} 
	
	putchar('\n');
	return (0);
}

