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
	printf("Size of a char: %ld", sizeof(char));
	printf("Size of an int: %ld", sizeof(int));
	printf("Size of a long int: %ld", sizeof(long int));
	printf("Size of a long long int: %ld", sizeof(long long int));
	printf("Size of a float: %ld", sizeof(float));
	return (0);
}
