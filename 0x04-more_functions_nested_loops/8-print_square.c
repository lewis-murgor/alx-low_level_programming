#include "main.h"
/**
 * print_square - prints a square
 * @size: size of the square
 */
void print_square(int size)
{
int col;
int row;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (col = 1; col <= size; col++)
{
_putchar('#');
for (row = 2; row <= size; row++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
