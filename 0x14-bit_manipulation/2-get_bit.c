#include "main.h"

/**
 * get_bit - Returns the value of a bit at a specified index in a decimal
 * @n: The decimal number to search
 * @index: The index of the bit to retrieve
 *
 * Return: The value (0 or 1) of the bit at the specified index
 * If the index is greater than 63, the function returns -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
