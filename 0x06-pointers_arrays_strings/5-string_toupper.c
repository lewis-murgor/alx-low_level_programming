#include "main.h"
/**
 * *string_toupper - converts lowercase letters to uppercase
 * @s: string
 * Return: string in uppercase
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 32;
	}
	return (s);
}
