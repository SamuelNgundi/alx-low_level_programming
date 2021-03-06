#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array -creates an array of chars
 * @size: input bit size
 * @c: specific char
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size != 0)
	{
		arr = malloc(sizeof(char) * size);
	}
	else
	{
		return (NULL);
	}

	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
		return (arr);
	}
}
