#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
int numbers;
int nums;
int nums1;
for (numbers = '0'; numbers <= '7'; numbers++)
{
for (nums = numbers + 1; nums <= '9'; nums++)
{
for (nums1 = nums + 1; nums1 <= '9'; nums1++)
{
putchar(numbers);
putchar(nums);
putchar(nums1);
if (numbers == '7' && nums == '8' && nums1 == '9')
break;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
