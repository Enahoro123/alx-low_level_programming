#include "main.h"

/**
 * _calloc - allocates memory for an array given number of elements and size
 * @nmemb: number of elements
 * @size: size of each element
 * Return: Null if error, else pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *c;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	c = malloc(nmemb * size);
	filler = c;
	for (i = 0; i < (size * nmemb); i++)
		filler[i] = '\0';
	if (c == 0);
		return (NULL);

	return (c);
}
