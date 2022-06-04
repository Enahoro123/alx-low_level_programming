#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int e, f;

	for (e = 0; e < 100; e++)
	{
		for (f = 0; f < 100; f++)
		{
			if (e < f)
			{
				putchar((e / 10) + 48);
				putchar((e % 10) + 48);
				putchar(' ');
				putchar((f / 10) + 48);
				putchar((f % 10) + 48);
				if (e != 98 || f != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
