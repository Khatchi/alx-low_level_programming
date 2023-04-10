#include "main.h"

/**
* clear_bit - it sets the bit at a specified index in bin. rep. of n to 0
* @n: a pointer to unsigned long integer
* @index: tyhe index to the bit to be cleared
* Description - A func. that sets the value of a bit to 0 at given index
* Return: 1 if success, or -1 on error
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
