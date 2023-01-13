#include "main.h"
/**
 * malloc_checked - Allocates a block of memory using malloc
 * @b: Number of memory
 * Return: 98 or pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *y;

	y = malloc(b);
	if (y == NULL)
	{
		exit(98);
	}
	return (y);
}

