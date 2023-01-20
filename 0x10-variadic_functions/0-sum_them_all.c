#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of the parameters
 * @n: Number of arguments
 * Return: The sum of the arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	var_list args;

	var_start(args, n);
	for (i = 0; i < n; i++)
		sum += var_arg(args, int);
	var_end(args);

	return (sum);
}

