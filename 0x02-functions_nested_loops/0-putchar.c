#include "main.h"
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
char *line = "_putchar";
while (*line)
{
_putchar(*line);
line++;
}
_putchar('\n');
return (0);
}
