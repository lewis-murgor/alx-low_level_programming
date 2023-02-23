#include "main.h"
/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 */
void more_numbers(void)
{
int nums;
int x;
for (x = 0; x < 10; x++)
{
for (nums = 0; nums <= 14; nums++)
{
if (nums >= 10)
{
_putchar((nums / 10) + '0');
}
_putchar((nums % 10) + '0');
}
_putchar('\n');
}
}
