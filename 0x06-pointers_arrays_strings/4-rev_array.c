#include "main.h"
/**
 * reverse_array - a function that reverse an array
 * @a: first parameter
 * @n: second parameter
 * Return: Allow success
*/
void reverse_array(int *a, int n)
{
	int *p;
	int count;

	for (count = 0; count < n; count++)
		p[count] = a[count];
	for (count = 0; count < n && n >= 0; count++)
		a[count] = p[--n];
}
