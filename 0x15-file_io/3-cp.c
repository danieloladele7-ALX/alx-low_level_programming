#include "main.h"
/**
 * check_argc - checks for the correct number of arguments
 * @argc: number of arguments
 *
 * Return: void
 */
void check_argc(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, read_f, close_r, close_w;
	char buf[BUFSIZ];

	check_argc(argc);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((read_f = read(file_from, buf, BUFSIZ)) > 0)
	{
		if (file_to == -1 || write(file_to, buf, read_f) != read_f)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_from);
			close(file_to);
			exit(99);
		}
	}
	if (read_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close_r = close(file_from);
	close_w = close(file_to);
	if (close_r == -1 || close_w == -1)
	{
		if (close_r == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		if (close_w == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
