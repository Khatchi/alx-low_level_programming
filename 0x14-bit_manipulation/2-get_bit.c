#include "main.h"
/**
 * get_bit - a func that returns value of a bit at an index in dec. numb
 * Description - returns value of bit at given index in a dec number
 * @n: the no being looked for
 * @index: the index of the bit given
 * Return: returns the bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value_of_bit;

	if (index > 63)
	{
		return (-1);
	}
	value_of_bit = (n >> index) & 1;

	return (value_of_bit);
}
