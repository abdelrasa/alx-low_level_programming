#include "main.h"
/**
 * is_prime_number - says if an integer is a prime number or no
 * @n: number
 *
 * return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	for (int j = 2; j <= n / 2; j++)
	{
		if (n % j == 0)
		{
			return (0);
		}
	}
	return (1);
}
