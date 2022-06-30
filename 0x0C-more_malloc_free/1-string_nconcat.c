#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - concatenate 2 strings, only n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to include of s2
 * Return: NULL if fail, else pointer to malloc memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	int strlen1, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	strlen1 = (unsigned int)_strlen(s1);
	c = malloc((strlen1 + n + 1) * sizeof(char));
	if (c == NULL)
		return (NULL);
	for (i = 0, j = 0; i < (strlen1 + n); i++)
	{
		if (i < strlen1)
			c[i] = s1[i];
		else
			c[i] = s2[j++];
	}
	j[i] = '\0';

	return (j);
}

/**
 * _strlen - find length of string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
