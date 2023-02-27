#include "main.h"
/**
 * swap_int - swaps values of two integers
 * @a: integer
 * @b: another ineger
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
