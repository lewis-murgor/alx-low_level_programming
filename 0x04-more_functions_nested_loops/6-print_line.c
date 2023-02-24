#include "main.h"
/**
 * print_line - prints a straight line
 * @n: number of times to print _
 */
void print_line(int n)
{
int line;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (line = 0; line <= n; line++)
{
_putchar('_');
}
_putchar('\n');
}
}
