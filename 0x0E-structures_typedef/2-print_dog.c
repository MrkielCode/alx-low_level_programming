#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - to print dogs
 * @d: first member;
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	printf("%s\n", d->name);
	printf("%f\n", d->age);
	printf("%s\n", d->owner);
}
