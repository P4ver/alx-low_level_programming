#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct of information fo the dog,
 *@name: pointer is a name of the dog,
 *@age: float how old is the dog,
 *@owner: string pointer the ownr of the dg,
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
