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
	size_t r_open = 0;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = (char *)malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	r_open = open(filename, O_RDONLY);
	r_read = read(r_open, buffer, letters);
	r_write = write(STDIN_FILENO, buffer, r_read);
	if (r_open == -1 || r_read == -1 || r_write == -1 || r_read != r_write)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(read);
	return (r_write);
}
