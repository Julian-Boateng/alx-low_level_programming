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

	if (n > 0)
		printf("%d is posit\n", n);
	else if (n == 0)
		printf("%d is zr\n", n);
	else
		printf("%d is nega\n", n);

	return (0);
}