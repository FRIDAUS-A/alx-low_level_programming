#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: first parameter
 * @s2: second parameter
 * Return: Allow success
*/
int _strcmp(char *s1, char *s2)
{
	int count = 0;

	while ((s1[count] && s2[count]) && (s1[count] == s2[count]))
	{
		count++;
	}
	return (s1[count] - s2[count]);
}
