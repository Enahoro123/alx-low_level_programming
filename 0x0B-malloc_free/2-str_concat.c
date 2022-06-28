#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concat string
 */

char *str_concat(char *s1, char *s2)
{
	char *c;
	int i, j, e, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	c = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);
	if (c == NULL)
		return (NULL);

	for (e = 0, d = 0; e < (i + j + 1); e++)
	{
		if (e < i)
			c[e] = s1[e];
		else
			c[e] = s2[d++];
	}

	return (c);
}
