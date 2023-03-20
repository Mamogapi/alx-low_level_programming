#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Write a function that initialize a variable of type struct dog
 * @d: typedef pointer function
 * @name: string variable
 * @age: float variable
 * @owner: string variable
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d.name = name;
		d.age = age;
		d.owner = owner;
	}
}
