#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates a block of memory using malloc
 * @b: Number of memory
 * Return: 98 or pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}

