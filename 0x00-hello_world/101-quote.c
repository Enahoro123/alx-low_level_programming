#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - main block
 *
 * Return: 1
 */
int main(void)
{
	char str0[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str0, 59);
	return (1);
}
