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
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
