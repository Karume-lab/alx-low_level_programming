#include<stdio.h>
/**
 * main-Entry point
 * Description: Gives the size of data types
 * @sizeof() - Returns the size of the data type
 * @printf() - Prints a line/string
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %ld\n", sizeof(char));
	printf("Size of an int: %ld\n", sizeof(int));
	printf("Size of a long int: %ld\n", sizeof(long int));
	printf("Size of a long long int: %ld\n", sizeof(long long int));
	printf("Size of a float: %ld\n", sizeof(float));
	return (0);
}
