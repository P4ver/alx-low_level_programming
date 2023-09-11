#include "dog.h"
/**
 * init_dog - function that initialize a var of type struct dog,
 * @d: pnter to structuer dog to init,
 * @name: dog's name,
 * @age: age of dog,
 * @owner: the owner of dog,
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
