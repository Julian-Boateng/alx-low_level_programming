#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: n is the number to be checked
 *
 * Return: 1 if n > 0, -1 if n < 0, 0 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
