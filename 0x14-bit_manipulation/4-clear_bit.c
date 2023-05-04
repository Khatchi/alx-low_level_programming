#include "main.h"
/**
 * clear_bit - a funct that sets/clears the value of given bit to NULL
 * Description - writes a func which clears value of a given bit to 0
 * @n: the pointer to the given number to change
 * @index: the index value of the bit to be cleared
 * Return: returns 1 on success, otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 46)
	{
		return (-1);
	}
	*n = (~(1UL << index) & *n);
	return (1);
}
