#include <unistd.h>

/**
 * main - main block
 * Print _putchar.
 * Return: 0
 */
int _putchar(c)	
{
	return(write(1,	&c, 1));

}
