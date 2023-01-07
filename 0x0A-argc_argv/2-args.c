#include "stdio.h"
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Allow success
*/
int main(int argc, char **argv)
{
	while (*argv)
	{
		printf("%s", *argv);
		if (*argv != argv[argc - 1])
			printf('\n');
		argv++;
	}
	return (0);
}
