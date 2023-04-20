#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given as a parameter
 * @array: array
 * @size: size of array
 * @action: pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *i;

	i = array + size - 1;

	if (array && size && action)
		while (array <= i)
			action(*array++);
}
