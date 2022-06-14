#include "main.h"

/**
 * rev_string - reverse a string
 * @s: char array string type
 */

void rev_string(char *s)
{
	int i, j, k;
	char a;

	for (i = 0; s[i] != '\0'; i++)
		;

	k = i;
	for (i--, j = 0; j < k / 2; i--, j++)
	{
		a = s[j];
		s[j] = s[i];
		s[i] = a;
	}
}
