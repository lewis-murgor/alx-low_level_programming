#include "main.h"
/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 */
void more_numbers(void)
{
int nums;
int x;
x = 0;
while (x < 10)
{
for (nums = '0'; nums <= '14'; nums++)
_putchar(nums);
x++;
_putchar('\n');
}
}
