#include "main.h"
/**
 * _isalpha - function that checks if input is an alphabetic character
 * @c: letter input
 * Return: 1 if input is a letter and 0 if otherwise
 */
int _isalpha(int c)
{
if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
return (1);
else
return (0);
}
