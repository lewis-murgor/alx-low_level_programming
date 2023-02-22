#include "main.h"
/**
 * _abs - function that determines the absolute value of an integer
 * @n: integer input
 * Return: n (success)
 */
int _abs(int n)
{
if (n < 0)
n *= -1;
return (n);
}
