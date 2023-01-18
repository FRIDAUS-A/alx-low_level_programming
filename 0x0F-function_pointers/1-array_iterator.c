#include "function_pointers.h"
/**
 * array_iterator -  a function that executes a function
 * given as a parameter on each element of an array.
 * @array: array to work on
 * @size: size of the array
 * @action: pointer to the function that execute
 * Return: Allow success
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
		(*action)(*array++);
}
