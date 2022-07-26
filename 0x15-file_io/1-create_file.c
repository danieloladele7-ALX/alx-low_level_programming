#include "main.h"
/**
 * create_file - creates a file and fills it with text
 * @filename: name of the file to create
 * @text_content: text to write in the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, str_len;
	ssize_t len_write;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		/* get string length  */
		for (str_len = 0 ; text_content[str_len]; str_len++)
			;
		/* write text to file */
		len_write = write(fd, text_content, str_len);
		if (len_write != str_len)
			return (-1);
	}
	close(fd);

	return (1);
}
