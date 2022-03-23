#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string
 * @g: Our string
 * Return: g
 */
char *cap_string(char *g)
{
	int i, j;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; g[i] != '\0'; i++;)
	{
		if (i == 0 && g[i] >= 'a' && g[i] <= 'z')
			g[i] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (g[i] == spe[j])
			{
				if (g[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
		}
	}
	return (g);
}
