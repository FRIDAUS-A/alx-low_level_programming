#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a container for two string and a float
 * @name: holds the name
 * @age: holds the age
 * @owner: holds owner
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
