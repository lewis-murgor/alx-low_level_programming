#include "main.h"
/**
 * print_diagonal - prints diagonal line
 * @n: number of times to print '\'
 */
void print_diagonal(int n)
{
int d;
int x;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (d = 1; d <= n; d++)
{
for (x = 1; x < d; x++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
