#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializing Dog variable
 * @d: first member
 * @name: second member
 * @age: third member
 * @owner: fouth member
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
