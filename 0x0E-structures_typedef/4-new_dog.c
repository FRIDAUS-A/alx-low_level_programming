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
	dog_t *str;
	
	ptr = malloc(sizeof(float));
	if (ptr == NULL)
		return (NULL);
	str->name = name;
	ptr->age = age;
	str->owner = owner;
	return (ptr);
}
