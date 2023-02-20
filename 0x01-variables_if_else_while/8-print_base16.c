#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
int numbers;
int nums;
for (numbers = '0'; numbers <= '9'; numbers++)
{
putchar(numbers);
}
for (nums = 'a'; nums <= 'f'; nums++)
{
putchar(nums);
}
putchar('\n');
return (0);
}
