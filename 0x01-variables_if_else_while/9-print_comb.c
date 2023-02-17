#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
	for (j = i + 1; j <= 9; j++)
	{
	putchar(i + 48);
	putchar(j + 48);

	if (!(i == 8 && j == 9))
	{
	putchar(44);
	putchar(32);
	}
	}
	}

	putchar(10);

	return (0);
}
