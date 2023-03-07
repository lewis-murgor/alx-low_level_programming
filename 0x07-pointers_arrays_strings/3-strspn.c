#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: segment to return bytes from
 * @accept: bytes to include
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				c++;
				break;
			}
			else if ((accept[i + 1]) == '\0')
				return (c);
		}
		s++;
	}
	return (c);
}
