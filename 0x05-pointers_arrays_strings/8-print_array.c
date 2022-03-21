#include <stdio.h>
#include "main.h"
/**
 * print_array -prints elements of an array of integers
 * @a: the first integer
 * @n: the number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}

	printf("\n");
}
