#include "main.h"
/**
 * *cap_string - capitalizs all words
 * @s: string
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i, x;
	char *seperators = ",;.!?\"(){} \n\t";

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			for (x = 0; *(seperators + x) != '\0'; x++)
			{
				if (*(s + i - 1) == *(seperators + x))
				{
					*(s + i) -= 32;
					break;
				}
				else if (i == 0)
				{
					*(s + i) -= 32;
					break;
				}
			}
	}
	return (s);
}
