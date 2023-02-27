#include "main.h"
/**
 * _strlen - returns length of a string
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	int l = 0;

	for (; *s != '\0'; s++)
	{
		l++;
	}

	return (l);
}
