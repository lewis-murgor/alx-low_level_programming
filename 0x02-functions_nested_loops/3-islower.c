#include "main.h"
/**
 * _islower - checks if innput is lowercase
 * @c: single letter input
 * Return: 1 if input is lowercase 0 if otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
