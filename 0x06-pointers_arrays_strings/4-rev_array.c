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
	
	n = n -1;
	for (count = 0; count < (n + 1) / 2 && n >= 0; count++)
	{
		p = a[count];
		a[count] = a[n];
		a[n--] = p;
	}
}
