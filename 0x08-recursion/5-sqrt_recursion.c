#include "main.h"

/**
 * __sqrt_recursion - returns the natural square root of a number
 * @n: integer to compute squareroot of
 * @i: iterate number
 * Return: integer squaroot
 */

int __sqrt_recursion(int n, int i)
{
	if (i * i < n)
		return (__sqrt_recursion(n, i + 1));
	return (i * i == n ? i : -1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to compute squareroot of
 *
 * Return: integer squaroot
 */
int _sqrt_recursion(int n)
{
	return (__sqrt_recursion(n, 0));
}

