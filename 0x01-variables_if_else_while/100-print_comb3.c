int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
	for (j = i + 1; j <= 9; j++)
	{
	/* Check that digits are different */
	if (i != j)
	{
	/* Print the smallest combination of two digits */
	putchar(i + '0');
	putchar(j + '0');

	/* Print separator if not the last combination */
	if (i != 8 || j != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}

	putchar('\n');
	return (0);
}

