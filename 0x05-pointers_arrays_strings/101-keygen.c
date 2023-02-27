#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program
 * 
 * Return: 0
 */

int main(void)

{
	char str[100];

	int x = 0, randnumber = 0, sum = 0;

	srand (time(NULL));

	for (x = 0; sum <= 2644; x++)

	{	
		randnumber = (rand() % 25) + 65;


		str[x] = randnumber;
		sum = sum + randnumber;

	}

	str[x++] = 2772 - sum;
	str[x++] = '\0';

	printf("%s\n", str);

	return (0);
}
