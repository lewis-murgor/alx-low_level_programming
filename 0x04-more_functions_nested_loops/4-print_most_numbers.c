#include "main.h"
/**
 * print_most_numbers - prints all numbers from 0 to 9 apart from 2 and 4
 * Return: 0-9 apart from 2 and 4
 */
void print_most_numbers(void)
{
int nums;
for (nums = '0'; nums <= '9'; nums++)
{
if ((nums == '2') || (nums == '4'))
continue;
else
_putchar(nums);
}
_putchar('\n');
}
