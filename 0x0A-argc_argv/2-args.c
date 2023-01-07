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
		argv++;
	}
	(void)argc;
	return (0);
}
