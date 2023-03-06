#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string to check
 * @c: character to locate
 * Return: pointer to the first occurrence of the character c in the string s,
 * return NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	char *s1 = s - 1;

	do {
		s1++;
		if (*s1 == c)
			return (s1);
	} while (*s1 != '\0');

	return (0);
}
