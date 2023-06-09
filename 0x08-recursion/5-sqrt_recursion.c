#include "main.h"
/**
 *  _sqrt_recursion - function that can to calculate square
 *  @n: natural number
 *  return: result
 */
int _sqrt_recursion(int n)
{
	double result;

	result = sqrt(n);

	if (result / 1 == (int)result)
		{
			return (result);
		}
	else
		return (-1);
}
