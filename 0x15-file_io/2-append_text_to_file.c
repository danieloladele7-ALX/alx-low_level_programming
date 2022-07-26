#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to append the text to
 * @text_content: content to append into the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len_write, str_len;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		/* get string length  */
		for (str_len = 0 ; text_content[str_len]; str_len++)
			;
		len_write = write(fd, text_content, str_len);
		if (len_write != str_len)
			return (-1);
	}

	close(fd);

	return (1);
}
