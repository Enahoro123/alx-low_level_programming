#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: int type number
 * Return: return value of last digit
 */
int print_last_digit(int n)
{
	int nm;

	if (n < 0)
	{
		nm = -1 * (n % 10);
		_putchar(nm + '0');
		return (nm);
	}
	else
	{
		nm = n % 10;
		_putchar(nm + '0');
		return (nm);
	}
}
