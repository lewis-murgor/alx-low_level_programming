#include <stdio.h>
/**
 * main - prints numbers 1 to 100
 * multiples of 3 are replaced by Fizz
 * multiples of 5 are replaced by Buzz
 * multiples of both 3 and 5 are replaced by FizzBuzz
 * Return: 0 (success)
 */
int main(void)
{
int nums;
for (nums = 1; nums <= 100; nums++)
{
if (nums % 3 == 0 && nums % 5 == 0)
printf("FizzBuzz");
else if (nums % 3 == 0)
printf("Fizz");
else if (nums % 5 == 0)
printf("Buzz");
else
printf("%d", nums);
if (nums < 100)
printf(" ");
}
printf("\n");
return (0);
}
