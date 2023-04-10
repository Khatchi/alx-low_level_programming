#include "main.h"

/**
* set_bit - sets the bit at a specified index in binary rep of *n to 1
* @n: a pointer to an unsigned long int
* @index: the index of the bit set to a value of 1
* Description - a func. that sets te value of bit to 1 at a specified index
* Return: 1 if success, or -1 on error
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 46)
	{
		return (-1);
	}
	*n = ((1UL << index) | *n);
	return (1);
}
