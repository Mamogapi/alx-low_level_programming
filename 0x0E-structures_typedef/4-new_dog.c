#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Write a function that creates a new dog
 * @name: string pointer variable
 * @age: float variable
 * @owner: strint pointer variable
 * Return: typedef function
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int x, z, y;

	dog_t *pnt;

	pnt = malloc(sizeof(dog_t));

	if (pnt == NULL)
	{
		free(pnt);
		return (NULL);
	}

	for (x = 0; name[x] = '\0'; x++)

	for (z = 0; owner[z] = '\0'; z++)

	pnt->name = malloc(x + 1);
	pnt->owner = malloc(z + 1);

	if (pnt->name == NULL || pnt->owner == NULL)
	{
		free(pnt->name);
		free(pnt->owner);
		free(pnt);
		return (NULL);
	}
	for (y = 0; y < x; y++)
		pnt->name[y] = name[y];

	pnt->name[y] = '\0';

	for (y = 0; y < z; y++)
		pnt->owner[y] = owner[y];

	pnt->owner[y] = '\0';
	pnt->age = age;
	return (pnt);
}
