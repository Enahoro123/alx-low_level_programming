#include <stdio.h>

/**
 * main - main block
 * Print all numbers of base16 in lowercase.
 * Return: 0
 */
int main(void)
{
	char al;
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (al = 'a'; al <= 'f'; al++)
	{
		putchar(al);
	}
	putchar('\n');

	return (0);
}
