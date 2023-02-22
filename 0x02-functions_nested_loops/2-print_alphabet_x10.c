#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
char alphabet;
int x;
x = 0;
while (x < 10)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
_putchar(alphabet);
x++;
_putchar('\n');
}
}
