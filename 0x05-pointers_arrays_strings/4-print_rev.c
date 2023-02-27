#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int l, k, m;
	char *a, c;

	a = s;

	while (s[l] != '\0')
	{
		l++;
	}

	for (k = 1; k < l; k++)
	{
		a++;
	}

	for (m = 0; m < (l / 2); m++)
	{
		c = s[m];
		s[m] = *a;
		*a = c;
		a--;
	}
}
