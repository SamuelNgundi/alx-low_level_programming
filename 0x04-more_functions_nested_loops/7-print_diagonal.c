#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		int j;

		for (j = 0; j <= n; j++)
		{

			if (j == 1)
				_putchar('\\');
			else if (j < i)
				_putchar(' ');
		}
		_putchar('\n');
	}
}
