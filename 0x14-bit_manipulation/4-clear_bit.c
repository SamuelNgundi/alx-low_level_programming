#include "main.h"
/**
 * clear_bit - set value of a bit to 0 at a given index
 * @n: integer
 * @index: given index
 * Return: 1 if it works, -1 if it errors
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
