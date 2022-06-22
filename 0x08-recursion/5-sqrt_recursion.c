#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: int number
 * Return: If no natural square root, return -1. Else return natural
 * square root
 */

int _sqrt_recursion(int n)
{
	return (sqt(n, 1));
}

/**
 * sqt - sqt function to solve _sqrt_recursion
 */

int sqt(int j, int i)
{
	int square;

	square = i * i;
	if (square == j)
		return (i);
	else if (square < j)
		return (sqt(j, i + 1));
	else
		return (-1);
}
