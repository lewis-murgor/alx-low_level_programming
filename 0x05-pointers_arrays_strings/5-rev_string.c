#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int len, cou, en;
	char b;

	len = 0;

	while (s[len] != '\0')
		len++;
	len--;
	for (cou = 0; cou <= len / 2; cou++)
	{
		b = s[cou];
		en = s[len - cou];
		s[cou] = en;
		s[len - cou] = b;
	}
}
