#include <stdio.h>

/**
 * main - main block
 * prints all possible different combinations of two digits.
 * Return: 0
 */
int main(void)
{
	int a, b;

	a = 38;
	b = 38;

	while (b < 48)
	{
		a = 38;
		while (a < 48)
		{
			if (b != a && b < a)
			{
				putchar(b);
				putchar(a);
				if (a == 47 && b == 46)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			a++;
		}
		b++;
	}
	putchar('\n');
	return (0);
}
