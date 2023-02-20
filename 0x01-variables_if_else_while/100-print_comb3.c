#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
int numbers;
int nums;
for (numbers = '0'; numbers < '9'; numbers++)
{
for (nums = '0'; nums < '9'; nums++)
{
if (numbers == '0' && nums < '1')
continue;
if (numbers == '1' && nums < '2')
continue;
if (numbers == '2' && nums < '3')
continue;
if (numbers == '3' && nums < '4')
continue;
if (numbers == '4' && nums < '5')
continue;
if (numbers == '5' && nums < '6')
continue;
if (numbers == '6' && nums < '7')
continue;
if (numbers == '7' && nums < '8')
continue;
if (numbers == '8' && nums < '9')
continue;
putchar(numbers);
putchar(nums);
if (numbers == '8' && nums == '9')
break;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
