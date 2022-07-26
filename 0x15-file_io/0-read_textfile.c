#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 *
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t len_read, len_write;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(fd);
		return (0);
	}

	len_read = read(fd, buffer, letters);
	close(fd);
	if (len_read == -1)
	{
		free(buffer);
		return (0);
	}
	buffer[len_read] = '\0';

	len_write = write(STDOUT_FILENO, buffer, len_read);
	if (len_write < 0)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	return (len_write);
}
