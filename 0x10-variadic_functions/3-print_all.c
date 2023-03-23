#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * c = char, i = integer, f = float, s = char *
 * @format: list of arg types
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list mylist;
	int i = 0, n = 0;
	char *sep =  ", ";
	char *str;

	va_start(mylist, format);

	while (format && format[n])
	{
		if (n == (i - 1))
		{
			sep = "";
		}
		switch (format[n])
		{
			case 'c':
				printf("%c%s", va_arg(mylist, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(mylist, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(mylist, double), sep);
				break;
			case 's':
				str = va_arg(mylist, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
				break;
		}
		n++;
	}
	printf("\n");
	va_end(mylist);
}
