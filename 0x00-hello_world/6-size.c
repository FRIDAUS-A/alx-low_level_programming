#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Allow success
*/
int main(void)
{
	printf("size of a char: %lu byte(s)\nsize of an int: %lu byte(s)\nsize of a long int: %lu byte(s)\nsize of a long long int: %lu byte(s)\n", sizeof(char), sizeof(int), sizeof(long int), sizeof(long long int));
	printf("size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
