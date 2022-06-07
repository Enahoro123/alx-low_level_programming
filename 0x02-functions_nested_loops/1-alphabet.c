#include "main.h"

/**
 * print_al - Print alphabet in lowercase using only '_putchar'
 * Return: 0
 */
void print_al(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		_putchar(al);
		al++;
	}
	_putchar('\n');
}
