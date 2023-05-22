#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @r: r is the integer to be checked
 *
 * Return: integer
 */

int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else
	{
		return (r * -1);
	}
}
