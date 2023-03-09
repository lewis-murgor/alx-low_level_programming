#include "main.h"
/**
 * help - helper for prime function
 * @n: number
 * @s: number
 * Return: 1 if prime, 0 if not prime
 */
int help(int n, int s)
{
	if (s > 9)
		return (1);
	else if (n % s != 0)
		return (help(n, ++s));
	return (0);
}

/**
 * is_prime_number - checks for prime numbers
 * @n: number
 * Return: 1 if prime, 0 if not prime
 */
int is_prime_number(int n)
{
	if (n == 1 || n == -1 || n == 0)
		return (0);
	return (help(n, 2));
}
