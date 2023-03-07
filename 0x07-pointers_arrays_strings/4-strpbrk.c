#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: bytes to search for
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * return NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *s1 = s - 1;
	int i;

	do {
		s1++;
		for (i = 0; *(accept + i) != '\0'; i++)
			if (*s1 == *(accept + i))
				return (s1);
	} while (*s1 != '\0');

	return (0);
}
