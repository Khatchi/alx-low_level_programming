#include "search_algos.h"
#include <math.h>

/* Note that  compiling math.h with gcc requires `-lm` */

size_t min(size_t a, size_t b);

/**
 * min - this is the minimum of two size_t values
 * @a: the first value
 * @b: tghe second value
 *
 * Return: returns `a` if lower or equal to `b`, `b` otherwise
 */
size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
 * jump_search - this searches for a value in a sorted array of integers using
 * a jump search algorithm
 * @array: A pointer to first element of array to search
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t low, high, jump;

	if (!array || size == 0)
		return (-1);

	jump = sqrt(size);

	for (high = 0; high < size && array[high] < value;
	     low = high, high += jump)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       high, array[high]);
	}

	/* causes 'found' msg even when value not in array */
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	for (; low <= min(high, size - 1); low++)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);
	}

	return (-1);
}
