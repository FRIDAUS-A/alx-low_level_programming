#include "main.h"
/**
 * reverse_array - a function that reverse an array
 * @a: first parameter
 * @n: second parameter
 * Return: Allow success
*/
void reverse_array(int *a, int n)
{
	int count, p;

	for (count = 0; count < n / 2 && n >= 0; count++)
	{
		n = n - 1;
		p = a[count];
		a[count] = a[n];
		a[n--] = p;
	}
}
