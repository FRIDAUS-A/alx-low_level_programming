#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints a struct dog
 * @d: address of variable
 * Return: Allow success
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)");
		else
			printf("Name: %s\n", d->name);
		if (d->age == 0)
			printf("(nil)");
		else
			printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("(nil)");
		else
			printf("Owner: %s", d->owner);
	}
	else
		return;
}
