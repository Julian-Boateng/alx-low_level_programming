#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file if it exists
 * @filename: name of the file
 * @text_content: string to append to file
 * Return: 1 if the file exists and text is successfully appended,
 *         -1 if the file doesn't exist or access is denied
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, result = 1, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (len > 0)
	{
		result = (write(fd, text_content, len) == len) ? 1 : -1;
	}

	close(fd);
	return (result);
}

