#include "main.h"

/**
 * print_binary - Prints the binary representation of a decimal
 * @n: The decimal number to print in binary.
 */
void print_binary(unsigned long int n)
{
	int bit_index, count = 0;
	unsigned long int current_bit;

	for (bit_index = 63; bit_index >= 0; bit_index--)
	{
		current_bit = n >> bit_index;

		if (current_bit & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
	}

	if (!count)
		_putchar('0');
}
