#include "search_algos.h"

/**
 * linear_search - this searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: this inputs array
 * @size: the size of the array
 * @value: the value to search in
 * Return: EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
	{
		return (-1);
	}

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%li] = [%i]\n", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
	}
	return (-1);
}
