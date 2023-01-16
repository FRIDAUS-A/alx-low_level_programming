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
	int index_name = 0, index_owner = 0;

	while (name[index_name])
		index_name++;
	while (owner[index_owner])
		index_owner++;
	if (name == NULL || owner == NULL || age == NULL)
		return 
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = malloc(sizeof(char) * (index_name + 1));
	if (ptr->name == NULL)
	{
		free(ptr->name);
		return (NULL);
	}
	ptr->owner = malloc(sizeof(char) * (index_owner + 1));
	if (ptr->owner == NULL)
	{
		free(ptr->owner);
		return (NULL);
	}
	ptr->name = name;
	ptr->owner = owner;
	ptr->age = age;
	return (ptr);
}
