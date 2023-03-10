#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int r;

	for (r = 0; r < argc; r++)
	printf("%s\n", argv[r]);
	return (0);
}

