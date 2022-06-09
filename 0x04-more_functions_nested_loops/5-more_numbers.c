#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Description: Can only use _putchar 3 times
 */
void more_numbers(void)
{
	int j, i;

	j = 0;
	while (j < 10)
	{
		i = 0;
		while (i < 15)
		{
			if (i > 9)
				_putchar(i / 10 + '0');

			_putchar(i % 10 + '0');
			i++;
		}
		j++;
		_putchar('\n');
	}
}
