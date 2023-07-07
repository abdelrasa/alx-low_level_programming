#include "main.h"

/**
 * set_bit - Sets a bit at the specified index to 1.
 * @n: A pointer to the number to be changed.
 * @index: The index of the bit to set to 1.
 * Return: 1 if the bit was set successfully,
 * -1 if the index is greater than 63
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
