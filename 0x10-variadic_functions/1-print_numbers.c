#include "variadic_functions.h"

/**
 * print_numbers- Prints strings, followed by a new line.
 * @separator: separates
 * @n: The number of arguments
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
