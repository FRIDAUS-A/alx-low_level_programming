#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - a function that create a new dog.
 * @name: holds the name
 * @age: holds the age
 * @owner: holds the owner name
 * Return: Allow success
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	char *nptr = name, *owptr = owner;
	int index_name = 0, index_owner = 0;

	while (name[index_name])
		index_name++;
	while (owner[index_owner])
		index_owner++;
	if (name == NULL || owner == NULL || age < 0)
		return (NULL);
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = malloc(sizeof(char) * (index_name + 1));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->owner = malloc(sizeof(char) * (index_owner + 1));
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	ptr->name = name;
	ptr->owner = owner;
	ptr->age = age;
	return (ptr);
}
