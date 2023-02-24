#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
int r;
int x;
int t;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (r = 0; r <= (size - 1); r++)
{
for (x = 0; x < (size - 1) - r; x++)
{
_putchar(' ');
}
for (t = 0; t <= r; t++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
