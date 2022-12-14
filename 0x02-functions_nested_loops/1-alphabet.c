#include<stdio.h>
#include"main.h"
/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabets
 *
 * print_alphabet() prints the lowercase of alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar (alpha);
	_putchar ("\n");
}
