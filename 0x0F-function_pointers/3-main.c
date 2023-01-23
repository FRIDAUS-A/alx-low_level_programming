#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Allow success
*/
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if  ((argv[2] == "/" && atoi(argv[3]) == 0) ||
			(argv[2] == "%" && atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	if (!(argv[2] == "+" || argv[2] == "-" || argv[2] == "*"
				|| argv[2] == "/" || argv[2] == "%"))
	{
		printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	}
	return (0);
}
