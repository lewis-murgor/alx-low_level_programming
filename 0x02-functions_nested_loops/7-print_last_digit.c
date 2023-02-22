#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @n: a number's last digit
 * Return: value of last digit
 */
int print_last_digit(int n)
{
int i;
i = (n % 10);
if (i < 0)
{
i = (-1 * i);
}
_putchar(i + '0');
return (i);
}
