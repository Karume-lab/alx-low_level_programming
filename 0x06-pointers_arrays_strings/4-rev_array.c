#include "main.h"
/**
 *reverse_array - Reverse the elements in an array
 *@a: Parameter
 *@n: Parameter
 *Return: array
 */
void reverse_array(int *a, int n)
{
	int i = 0, t;

	n = n - 1;
	while (i < n)
	{
		t = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = t;
		i++;
	n--;
	}
}
