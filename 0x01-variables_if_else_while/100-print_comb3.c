#include <stdio.h>

/**
 * main - main block
 * prints all possible different combinations of two digits.
 * Return: 0
 */
int main(void)
{
	int a, b;

	a = 50;
	b = 50;

	while (b < 69)
	{
		a = 50;
		while (a < 69)
		{
			if (b != a && b < a)
			{
				putchar(b);
				putchar(a);
				if (a == 58 && b == 57)
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
