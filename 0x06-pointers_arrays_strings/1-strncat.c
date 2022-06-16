#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: string
 * @src: string
 * @n: number of elements to concatenate in
 * Return: pointer to resulting `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, c;

	for (a = 0; dest[a] != '\0'; a++)
		;

	for (c = 0; src[c] != '\0' && n > 0; c++, n--, a++)
	{
		dest[a] = src[c];
	}
	return (dest);
}
