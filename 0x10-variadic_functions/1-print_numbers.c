#include "variadic_functions.h"

/**
 * print_numbers- Prints strings, followed by a new line.
 * @separator: separates
 * @n: The number of arguments
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	var_list args;
	unsigned int i;

	var_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", var_arg(args, int));
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
