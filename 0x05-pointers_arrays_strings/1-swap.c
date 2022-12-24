#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers
 * @a: first parameter
 * @b: second parameter
 * Return: Allow success
*/
void swap_int(int *a, int *b)
{
	int p;
	
	p = *a;
	*a = *b;
	*b = p;
}
