#include "main.h"

/**
 * is_prime_number - determine if a number is a prime number
 * @n: int number
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n < 4)
		return (1);
	return (hai(n, 2));
}

/**
 * _sqrt - return square root of number
 * @j: number
 * @i: number incrementer acting as divisor
 * Return: square root of `x`
 */

int _sqrt(int j, int i)
{
	int square;

	square = i * i;
	if (square >= j)
		return (i);
	else
		return (_sqrt(j, i + 1));
}

/**
 * hai - helper function, recursive steps taken
 * @a: number given to original function is_prime_number
 * @c: incrementer divisor
 * Return: 0 if not prime, 1 if prime
 */

int hai(int a, int c)
{
	if (a % c == 0)
		return (0);
	else if (_sqrt(a, 1) < c)
		return (1);
	else
		return (hai(a, c + 1));
}
