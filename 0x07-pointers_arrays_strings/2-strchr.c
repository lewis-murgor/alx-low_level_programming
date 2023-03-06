#include "main.h"
#include <stdlib.h>
/**
 * _strchr - locates a character in a string
 * @s: string to check
 * @c: character to locate
 * Return: pointer to the first occurrence of the character c in the string s,
 * return NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
