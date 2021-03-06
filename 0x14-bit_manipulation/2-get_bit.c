#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: integer
 * @index: index of the bit
 * Return: the vaue of the bit at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
