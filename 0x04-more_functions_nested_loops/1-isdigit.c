#include "main.h"
/**
 * _isdigit - checks if input is a digit
 * @c: input
 * Return: 1 if c is a digit, if not 0
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
