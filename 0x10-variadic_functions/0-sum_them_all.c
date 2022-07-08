#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of extra params
 * Return: total sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list l;
	int s = 0;

	if (n == 0)
		return (0)

	va_start(l, n);
	for (i = 0, i < n; i++)
		s += va_arg(l, int);

	va_end(l);

	return (s);
}
