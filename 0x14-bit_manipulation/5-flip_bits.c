#include "main.h"

/**
 * flip_bits - Counts the number of bits that need to be flipped
 *             to transform one number into another
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, cnt = 0;
	unsigned long int cr;
	unsigned long int differing_bits = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		cr = differing_bits >> j;
		if (cr & 1)
			cnt++;
	}

	return (cnt);
}
