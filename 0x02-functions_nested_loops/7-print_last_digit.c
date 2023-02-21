#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @r: r is an integer
 *
 * Return: last digit of number r
 */

int print_last_digit(int r)
{
	int last = r % 10;

	if (r < 0)
		last = -1 * (r % 10);

	_putchar(last + '0');

	return (last);
}
