#include <stdio.h>

/**
 * main - main block
 * print all letters but the letter 'q' and 'e'.
 * Return: 0
 */
int main(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		if (al != 'q' && al != 'e')
			putchar(al);
		al++;
	}
	putchar('\n');

	return (0);
}
