#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * except q and e
 * Result: 0
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

