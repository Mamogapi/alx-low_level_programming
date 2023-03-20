#ifndef _dog_h_
#define _dog_h_

/**
 * struct dog - Define a new type elements
 * @name: string variable
 * @age: float variable
 * @owner: string variable
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * anim - typdef struct dog
 */
typedef struct dog anim;
void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif /* _dog_h_ */
