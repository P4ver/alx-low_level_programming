#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - function that creates a new dog.
 * @name: the name of dog (pointer)
 * @age: the age of the dog (float)
 * @owner: the owner of dog (ponter)
 * Return: return the pointer to newdog,
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *nm_cy;
	char *own_cy;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == 0)
		return (0);
	nm_cy = strdup(name);
	own_cy = strdup(owner);
	if (nm_cy == 0 || own_cy == 0)
	{
		free(nm_cy);
		free(own_cy);
		free(new_dog);
		return (0);
	}
	new_dog->name = nm_cy;
	new_dog->age = age;
	new_dog->owner = own_cy;
	return (new_dog);
}
