#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @p: pointer to the variable
 * @name: holds the name
 * @age: holds age
 * @owner: holds the name of the owner
 * Return: Allow success
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
