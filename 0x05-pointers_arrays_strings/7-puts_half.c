#include "main.h"
/**
 * puts_half - prints half a string
 * @str: str
 */
void puts_half(char *str)
{
	int len, half;

	len = 0;

	while (str[len] != '\0')
		len++;
	half = (len) / 2;
	if (len % 2 != 0)
		half = ((len - 1) / 2) + 1;
	for (; half < len; half++)
		_putchar(str[half]);
	_putchar('\n');
}
