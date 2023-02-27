#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: array
 * @n: length of array
 */
void print_array(int *a, int n)
{
	int index;

	index = 0;

	while (index < n)
	{
		if (index != (n - 1))
			printf("%i, ", a[index]);
		else
			printf("%i", a[index]);
		index++;
	}
	printf("\n");
}
