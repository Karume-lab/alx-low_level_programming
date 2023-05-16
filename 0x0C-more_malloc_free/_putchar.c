#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character to stdout
 * @c: The character to be printed
 *
 * Return: On success (1).
 */
int _putchar(car c)
{
	return (write(1, &c, 1));
}

