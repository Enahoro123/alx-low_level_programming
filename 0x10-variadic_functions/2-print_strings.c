#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print a string followed by a newline
 * @separator: string to be printed between strings
 * @n: number of strings passed to function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list l;
	char *h;

	va_start(l, n);
	for (i = 0; i < n; i++)
	{
		h = va_arg(l, char*);
		if (h == NULL)
			printf("(nil)");
		else
			printf("%s", h);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(l);
}
