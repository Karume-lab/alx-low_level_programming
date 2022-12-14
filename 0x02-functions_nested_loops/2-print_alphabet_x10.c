#include "main.h"
/**
 * print_alphabet_x10-Entry point
 *
 * return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char alpha;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
		_putchar(alpha);
		}
	_putchar('\n');
	}
}

