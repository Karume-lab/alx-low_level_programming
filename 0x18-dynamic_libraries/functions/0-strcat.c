#include "main.h"
/**
*_strcat - Entry Point
*@dest: Parameter
*@src: Parameter
*
*Return: destination string
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}

