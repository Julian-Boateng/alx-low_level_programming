#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file passed
 * @letters: number of letters it should read and print
 * Return: 0 if file can not be opened or read
 * if filename is NULL
 * if write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read_lett;
	char *buffer[1024];
	int total_lett = 0;

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	read_lett = read(fd, buffer, letters);

	if (read_lett == -1)
	{
		close(fd);
		return (0);
	}
	total_lett = write(STDOUT_FILENO, buffer, read_lett);

	close(fd);
	return (total_lett);
}
