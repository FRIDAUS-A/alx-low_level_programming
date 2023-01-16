#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees the container
 * @d: address of the variable
 * Return: Allow success
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
