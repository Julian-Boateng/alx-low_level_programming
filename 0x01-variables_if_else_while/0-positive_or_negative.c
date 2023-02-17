#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(NULL));
	n = rand() - RAND_MAX / 2;

	printf("%d\n", n);
	printf("%d is %s\n", n, n > 0 ? "positive" : n == 0 ? "zero" : "negative");

	return (0);
}
