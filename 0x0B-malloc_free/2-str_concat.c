#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - a function that concatenate two strings
 * @s1: destination string
 * @s2: source string
 * Return: Allow success
*/
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int s1_count = 0, s2_count = 0;

	while (*(s1 + s1_count))
		s1_count++;
	while (*(s2 + s2_count))
		s2_count++;
	ptr = (char *)malloc((s1_count + s2_count + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (s2_count = 0; *(s2 + s2_count) != '\0'; s2_count++)
		*(s1 + s1_count + s2_count) = *(s2 + s2_count);
	*(s1 + s1_count + s2_count) = '\0';
	return (ptr);
}
