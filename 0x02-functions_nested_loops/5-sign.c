#include "main.h"
/**
 *print_sign - Checks if a character is in the alphabet
 *@n: parameter
 *Return: Always 0 (Success) or 1 (Failure)
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar ('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar ('0');
	return (0);
	}
	else
	{
	_putchar ('-');
	return (-1);
	}
}
