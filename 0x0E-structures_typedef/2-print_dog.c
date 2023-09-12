#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - function prints details of struct,
 *@d: the pointer to the struct,
 */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
