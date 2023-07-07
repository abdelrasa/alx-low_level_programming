#include "main.h"

/**
 * clear_bit - Clears the value of a given bit by setting it to 0.
 * @n: A pointer to the number to be changed.
 * @index: The index of the bit to clear.
 * Return: 1 if the bit was cleared successfully,
 * -1 if the index is greater than 63
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
