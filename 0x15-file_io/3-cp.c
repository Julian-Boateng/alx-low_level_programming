#include "main.h"

/**
 * main - copies contents of a file to another
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, or an error code on failure
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, bytes_read, bytes_written, close_status;
	char buffer[1024];

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	return (97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	return (98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP);
	if (fd_to == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
	close(fd_from);
	return (99);
	}

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
	bytes_written = write(fd_to, buffer, bytes_read);
	if (bytes_written != bytes_read)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
	close(fd_from);
	close(fd_to);
	return (99);
	}
	}

	if (bytes_read == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	close(fd_from);
	close(fd_to);
	return (98);
	}

	close_status = 0;
	if (close(fd_from) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", fd_from);
	close_status = 100;
	}

	if (close(fd_to) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", fd_to);
	close_status = 100;
	}

	return close_status;
}

