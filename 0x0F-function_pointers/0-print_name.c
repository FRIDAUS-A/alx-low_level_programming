#include "function_pointers.h"
/**
 * print_name - a function that prints name
 * @name: name to print
 * @f: function pointer to a function that returns void
 * Return: Allow success
*/
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
