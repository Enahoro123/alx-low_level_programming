#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string using malloc
 * @str: string to duplicate
 * Return: Pointer to a the new duped string
 */

char *_strdup(char *str)
{
	char *c;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	c = malloc(i * sizeof(*c) + 1);
	if (c == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		c[j] = str[j];
	c[j] = '\0';

	return (c);
}
