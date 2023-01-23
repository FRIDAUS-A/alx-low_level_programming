#include "3-calc.h"

/**
 * op_add - a function that add two numbers
 * @a: first parameter
 * @b: second parameter
 * Return: Allow success
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a fuction that subtract two numbers
 * @a: first parameter
 * @b: second parameter
 * Return: Allow success
*/
int op_sub(int a, int b)
{
	if (a > b)
		return (a - b);
	else
		return (b - a);
}

/**
 * op_mul - a function that multiplies two numbers
 * @a: first parameter
 * @b: second parameter
 * Return: Allow succcess
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: first parameter
 * @b: second parameter
 * Return: Allow success
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: first parameter
 * @b: second parameter
 * Return: Allow success
*/
int op_mod(int a, int b)
{
	return (a % b);
}
