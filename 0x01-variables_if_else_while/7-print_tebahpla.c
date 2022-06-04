#include <stdio.h>

/**
 * main - main block
 * Print the alphabet in reverse order in lowercase.
 * Return: 0
 */
int main(void)
{
	int al;

	for (al = 'z'; al >= 'a'; al--)
	{
		putchar(al);
	}
	putchar('\n');

	return (0);
}
