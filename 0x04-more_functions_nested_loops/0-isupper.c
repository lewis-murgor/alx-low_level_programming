#include "main.h"
/**
 * _isupper - checks if input is uppercase
 * @c: single letter input
 * Return: 1 if input is uppercase 0 if otherwise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
