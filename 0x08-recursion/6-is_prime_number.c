#include "main.h"
/**
 * is_prime_number - a function that tests for an integer
 * @n: parameter of the function
 * Return: Allow success
*/
int is_prime_number(int n)
{
	if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0 && n != 1 && n > 0)
		return (1);
	else
		return (0);
}
