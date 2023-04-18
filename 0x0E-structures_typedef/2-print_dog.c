#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function that prints a struct dog
 * @d: pointer
 *
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nail)\n");
		else
			printf("Name : %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		if (d->owner == NULL)
			prinft("Owner: (nail)\n");
		else
			printf("owner: %s\n", d->owner);
	}
}
