#include "main.h"
/**
 * reverse_array - a function that reverse an array
 * @a: first parameter
 * @n: second parameter
 * Return: Allow success
*/
void reverse_array(int *a, int n)
{
	int count = 0;
	char p;

	n = n - 2;
	while (n >= 0 && count < n / 2)
	{
		a[count] = p;
		a[count++] = a[n];
		a[n--] = p;
	}

}
