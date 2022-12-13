#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 * @n: parameter of the function
 * Return: Allow success
*/
int _abs(int n)
{
	int a;

	a = -1 * n;
	if (n > 0)
		return (n);
	else
		return (a);
}
