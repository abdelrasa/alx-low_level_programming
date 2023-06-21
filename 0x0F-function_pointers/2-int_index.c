#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: size of array
 * @cmp: pointer
 *
 * Return: the integer index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;

	if (array != NULL || size > 0 || cmp != NULL)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
