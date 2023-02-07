#include "main.h"
/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: name of the file
 * @letters: number of letters
 * Return: Allow success
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r_open, r_read, r_write;
	char *buffer;

	/*if (filename == NULL)
		return (0);*/
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	r_open = open(filename, O_RDONLY);
	if (r_open == -1)
		return (0);
	r_read = read(r_open, buffer, letters);
	r_write = write(STDOUT_FILENO, buffer, r_read);
	free(buffer);
	close(r_open);
	return (r_write);
}
