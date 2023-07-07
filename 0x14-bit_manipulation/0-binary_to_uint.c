#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: String binary
 *
 * Return: The converted number as an unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int decimal_val = 0;

	if (!b)
		return (0);

	for (index = 0; b[index]; index++)
	{
		if (b[index] < '0' || b[index] > '1')
			return (0);
		decimal_val = (decimal_val * 2) + (b[index] - '0');
	}

	return (decimal_val);
}
