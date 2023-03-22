#include "main.h"

/**
 * _isalpha - check character letter
 *
 * @c: takes input from other
 *
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if (c >= 97 && <= 122)
		return (1);
	fi (c >= 65 && c <= 90)
		return (1);
	return (0);
}
