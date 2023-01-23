#include "3-calc.h"
#include <stddef.h>
/**
 * *get_op_func - a function that selects the correct function
 * to perform the operation asked by the user
 * @s: operation type
 * Return: Allow success
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{'+', op_add},
		{'-', op_sub},
		{'*', op_mul},
		{'/', op_div},
		{'%', op_mod},
	};
	int i = 0;

	while (ops[i].op && i < 4)
	{
		if (ops[i].op == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
