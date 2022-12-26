#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints n elements of an array of integers
 * @a: first parameter
 * @n: second parameter
*/
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
		i++;
	}
	printf("\n");
}
