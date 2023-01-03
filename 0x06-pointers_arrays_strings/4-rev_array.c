#include "main.h"
/**
 * reverse_array - a function that reverse an array
 * @a: first parameter
 * @n: second parameter
 * Return: Allow success
*/
void reverse_array(int *a, int n)
{
	int *p, count;

	n = n -1;
	for (count = 0; *(a + count); count++)
		*(p + count) = *(a + count);
	*(p + count) = '\0';
	for (count = 0; *(p + count) && n >= 0; count++)
		*(a + count) = *(p + n--);
}
