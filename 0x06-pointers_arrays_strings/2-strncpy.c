#include "main.h"
/**
 * _strncpy - a function that copies a string
 * @dest: string 1
 * @src: string 2
 * @n: number of n-bytes
 * Return: str
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
