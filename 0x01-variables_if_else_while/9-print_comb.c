#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: Assigns random number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
		if (num < 57)
			putchar(',');
		if (num < 57)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}

