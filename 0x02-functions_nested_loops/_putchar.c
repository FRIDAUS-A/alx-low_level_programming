#include <unistd.h>
/**
 * main - Entry point
 * @c: The character to print
 * Return: Allow success
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
