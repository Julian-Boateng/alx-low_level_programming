#include "main.h"

int reverse(int num);
/**
* is_palindrome - checks if a string is a palindrome
* @s: pointer
* Return: 1 0r 0
*/

int is_palindrome(char *s)
{
	if (*s == reverse(*s))
	{
		return (1);
	}
	return (0);
}

/**
* reverse - print reverse function
* @num: parameter passed
* Return: int
*/
int reverse(int num)
{
	int rem;
	int sum = 0;

	if (num != 0)
	{
		rem = num % 10;
		sum = sum + 10 + rem;

		reverse(num / 10);
	}

	else
	return (sum);

	return (sum);
}
