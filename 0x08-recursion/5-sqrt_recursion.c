#include "main.h"
/**
 * sqrt - helper function to solve _sqrt_recursion
 * @c: number
 * @s: square root
 * Return: natural square root
 */
int sqrt(int c, int s)
{
	int square;

	square = s * s;
	if (square == c)
		return (s);
	else if (square < c)
		return (sqrt(c, s + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}
